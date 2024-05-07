#!/usr/bin/pup
#@ install a specific ersion of flask {2.1.0)
pacckage {'flask':
	ensure => '2.1.0,
	povider => 'pip'
}

