-- Write your query below
SELECT sales_person.name
FROM sales_person
LEFT JOIN orders
    on sales_person.sales_id = orders.sales_id
LEFT JOIN company
    on orders.com_id = company.com_id
GROUP BY sales_person.name, sales_person.sales_id
HAVING SUM(CASE WHEN company.name = 'CRIMSON' THEN 1 ELSE 0 END) = 0;