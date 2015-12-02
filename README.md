## Expert profile feature
###### for Drupal 7

This is a profile feature which contains configuration for starting a new Drupal 7 website.

- This is configuration, packaged in a [feature](https://www.drupal.org/project/features) to get a Drupal 7 site up and running.
- This can be used in combination with a Drupal 7 [profile](https://github.com/iampuma/expert_profile)
- Use the profile's [make file](https://github.com/iampuma/expert_profile/blob/master/expert.make) to start the Drupal build

##### Installation

1. Copy the profile's [make file](https://github.com/iampuma/expert_profile/blob/master/expert.make) to a directory
2. Run ``drush make expert.make``
3. Run ``drush si expert_profile -y --account-name=admin --account-pass=admin --db-url=mysql://MYDB:MYPASS@localhost/DBNAME --site-name="Expert"``

###### OR

1. Try out [Drupal Vagrant](https://github.com/iampuma/drop) and run ``site=d7profile vagrant up``
