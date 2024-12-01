all:
	@echo Run \"make install\"" to install OSSD Mark Calculator.

install:
	@sudo cp -p apps/ossd-mark-cal.out /usr/bin/ossdmk.out
	@sudo cp -p apps/ossdmk /usr/local/bin/ossdmk

uninstall:
	@sudo rm -f /usr/bin/ossdmk.out
	@sudo rm -f /usr/local/bin/ossdmk