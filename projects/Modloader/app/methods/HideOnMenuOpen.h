#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HideOnMenuOpen.h>

namespace app::classes::HideOnMenuOpen {
    IL2CPP_REGISTER_METHOD(0x00B4A180, void, Awake, app::HideOnMenuOpen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B4A420, void, OnDestroy, app::HideOnMenuOpen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00443C10, void, OnMenuOpen, app::HideOnMenuOpen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00443CC0, void, OnMenuClose, app::HideOnMenuOpen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::HideOnMenuOpen* this_ptr)
} // namespace app::classes::HideOnMenuOpen
