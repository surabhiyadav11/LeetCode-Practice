-- # Write your MySQL query statement below
-- SELECT product_id,
-- ROUND(COALESCE(SUM(u.units * p.price) / SUM(u.units), 0), 2) AS average_price

-- FROM prices as p
-- LEFT JOIN Unitsold as u
-- ON p.product_id = u.product_id
-- AND u.purchase_date BETWEEN p.start_date AND p.end_date
-- GROUP BY p.product_id


SELECT p.product_id,
       ROUND(COALESCE(SUM(u.units * p.price) / SUM(u.units), 0), 2) AS average_price
FROM Prices AS p
LEFT JOIN UnitsSold AS u
  ON p.product_id = u.product_id
 AND u.purchase_date BETWEEN p.start_date AND p.end_date
GROUP BY p.product_id;


