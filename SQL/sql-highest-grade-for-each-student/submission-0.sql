-- Write your query below
SELECT DISTINCT ON (student_id) student_id, exam_id, score
FROM exam_results
ORDER BY student_id, score desc, exam_id asc;

-- order so highest score and lowest id is at the top
-- then do disinct on to keep the first row for each distinct student number