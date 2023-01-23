#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MarkAsDontDestroyOnLoadOnAwake.h>

namespace app::classes::MarkAsDontDestroyOnLoadOnAwake {
    IL2CPP_REGISTER_METHOD(0x03190B60, void, Awake, (app::MarkAsDontDestroyOnLoadOnAwake * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::MarkAsDontDestroyOnLoadOnAwake * this_ptr))
} // namespace app::classes::MarkAsDontDestroyOnLoadOnAwake
