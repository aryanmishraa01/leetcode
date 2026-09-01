SELECT MAX(Salary) as SecondHighestSalary FROM Employee
WHERE Salary < (
    SElECT MAX(Salary) FROM Employee
)