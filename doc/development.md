# Development

To start-up the development environment in a bash shell:

    docker-compose run ide bash
    
To start-up the IDE:

    docker-compose up

If you are ever changing the Dockerfile, then you must run:

    docker-compose build

Or:

    docker-compose up --build
