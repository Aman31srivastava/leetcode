# Write your MySQL query statement below
select * from Patients
where conditions like '% DIAB1%' or 
      conditions like 'DIAB1%'
order by patient_name;