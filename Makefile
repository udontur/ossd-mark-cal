all:
	@echo Run \"make install\"" to install OSSD Mark Calculator.

install:
	@cp -p apps/ossd-mark-cal.out /usr/bin/ossd-mark-cal.out
	@cp -p apps/ossdmk /usr/local/bin/ossdmk

uninstall:
	@rm -f /usr/bin/ossd-mark-cal.out
	@sudo rm -f /usr/local/bin/ossdmk