MODULE = turpial_firmware_sys

ifneq (,$(filter turpial_firmware_net,$(USEMODULE)))
  DIRS += net
endif

ifneq (,$(filter turpial_firmware_storage,$(USEMODULE)))
  DIRS += storage
endif

ifneq (,$(filter cjson,$(USEMODULE)))
  DIRS += cjson
endif

include $(RIOTBASE)/Makefile.base
