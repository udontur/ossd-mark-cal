all:
	@echo Run \"make install\"" to install OSSD Mark Calculator.

install:
	@cp -p apps/ossd-mark-cal.out /usr/bin/ossd-mark-cal.out
	@cp -p apps/ossdmk /usr/local/bin/ossdmk

uninstall:
	@rm -rf apps/ossd-mark-cal.out
	@rm -rf apps/ossdmk