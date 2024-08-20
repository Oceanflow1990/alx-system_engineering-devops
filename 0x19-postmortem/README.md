ng Apache returning a 500 error
stmortem

exec { 'fix wordpress':
  provider => 'shell',
  command  => 'sed -i "s/phpp/php/g" /var/www/html/wp-settings.php'
}

