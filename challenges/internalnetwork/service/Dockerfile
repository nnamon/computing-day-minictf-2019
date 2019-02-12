From linode/lamp:latest 
RUN apt-get update

RUN rm -rfd /var/www/example.com
RUN rm /etc/apache2/sites-enabled/example.com.conf
RUN rm /etc/apache2/sites-available/example.com.conf

COPY ./sites.conf /etc/apache2/sites-enabled/000-default.conf
COPY ./internal.conf /etc/apache2/sites-enabled/internal.proxy.winc0rp.com.conf
COPY ./internal.conf /etc/apache2/sites-available/internal.proxy.winc0rp.com.conf
COPY ./flag.txt /var/www/internal/flag
COPY ./index.php /var/www/internal
COPY ./index.html /var/www/html/index.html

COPY start.sh start.sh
RUN chmod +x start.sh

ENTRYPOINT ["./start.sh"]

EXPOSE 80
