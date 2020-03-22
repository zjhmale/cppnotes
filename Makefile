.PHONY: run poly clean

run:
	$(MAKE) poly

poly:
	bazel run //main:polymorphism

clean:
	bazel clean
