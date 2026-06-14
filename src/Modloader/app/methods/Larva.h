#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Larva.h>

namespace app::classes::Larva {
    IL2CPP_REGISTER_METHOD(0x00F05EF0, void, Awake, app::Larva* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F06080, void, OnDestroy, app::Larva* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F06210, void, OnGameSerializeLoad, app::Larva* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::Larva* this_ptr)
} // namespace app::classes::Larva
