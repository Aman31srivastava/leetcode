# Write your MySQL query statement below
select e.name from Employee e
join Employee b on e.id=b.managerId
group by b.managerId
Having count(*) >=5; 
