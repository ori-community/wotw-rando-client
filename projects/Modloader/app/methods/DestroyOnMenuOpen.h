#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DestroyOnMenuOpen.h>

namespace app::classes::DestroyOnMenuOpen {
    IL2CPP_REGISTER_METHOD(0x00B8C6C0, void, Awake, app::DestroyOnMenuOpen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B8C850, void, OnDestroy, app::DestroyOnMenuOpen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B8C9E0, void, OnMenuOpen, app::DestroyOnMenuOpen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::DestroyOnMenuOpen* this_ptr)
} // namespace app::classes::DestroyOnMenuOpen
