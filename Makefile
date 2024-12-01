all:
	@echo Run \"make install\"" to install OSSD Mark Calculator.

install:
	@cp -p apps/ossd-mark-cal.out /usr/bin/ossd-mark-cal.out
	@cp -p apps/ossdmk /usr/local/bin/ossdmk

uninstall:
	@rm /usr/bin/ossd-mark-cal.out
	@rm /usr/local/bin/ossdmk