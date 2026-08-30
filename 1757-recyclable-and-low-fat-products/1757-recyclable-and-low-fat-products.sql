# Write your MySQL query statement below
-- CREATE DATABASE IF NOT EXISTS trial;
-- CREATE TABLE Products {
--     id INT PRIMARY KEY,

-- }

SELECT product_id
FROM products
WHERE low_fats IN ("Y") AND recyclable IN  ("Y")
ORDER BY product_id;
