SELECT d.name as Department, e.name as Employee, e.salary as Salary FROM Employee e
JOIN Department d
    ON e.departmentID = d.id
WHERE e.salary = (
    SELECT MAX(e2.salary) FROM Employee e2
    WHERE e2.departmentID = e.departmentID
);