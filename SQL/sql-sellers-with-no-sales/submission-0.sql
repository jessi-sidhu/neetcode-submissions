-- Write your query below
SELECT seller_name
FROM seller
LEFT JOIN orders
    on orders.seller_id = seller.seller_id
GROUP BY seller.seller_id, seller.seller_name
HAVING SUM(CASE WHEN sale_date >= '2020-01-01' AND sale_date < '2021-01-01' THEN 1 ELSE 0 END) = 0 -- keeps everyone who didnt have any sales 
ORDER BY seller_name