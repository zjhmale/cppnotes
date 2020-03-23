.PHONY: run ownership poly clean

run:
	$(MAKE) poly
	$(MAKE) ownership

ownership:
	bazel run //main:ownership

poly:
	bazel run //main:polymorphism

clean:
	bazel clean
