No = 1

up:
	docker-compose up -d

setup:
	docker-compose run --rm cpp sh scripts/setup.sh

cpp_test:
	docker-compose run --rm cpp make run No=${No} -f scripts/run_test/Makefile

run_test:
	docker-compose run --rm python python scripts/run_test/run_test.py ${No}

get_question:
	docker-compose run --rm python python scripts/get_question/get_question.py ${No}