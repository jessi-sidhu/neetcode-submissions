-- Write your query below
SELECT e.left_operand, e.operator, e.right_operand,
    CASE 
        WHEN e.operator = '>' THEN l.value > r.value
        WHEN e.operator = '<' THEN l.value < r.value
        WHEN e.operator = '=' THEN l.value = r.value
    END AS value
FROM expressions e
JOIN variables l
    on e.left_operand = l.name
JOIN variables r
    on e.right_operand = r.name
