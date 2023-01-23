#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RocksGenerator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::RocksGenerator {
    IL2CPP_REGISTER_METHOD(0x0135A190, void, Awake, (app::RocksGenerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0135A240, void, OnDestroy, (app::RocksGenerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0135A2E0, void, FixedUpdate, (app::RocksGenerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0135AEA0, void, UpdateMaterial, (app::RocksGenerator * this_ptr, app::GameObject* generate_object))
    IL2CPP_REGISTER_METHOD(0x0135B230, void, OnDrawGizmos, (app::RocksGenerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005065D0, bool, get_IsSuspended, (app::RocksGenerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005065E0, void, set_IsSuspended, (app::RocksGenerator * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FC380, app::SuspendableMask__Enum, get_Mask, (app::RocksGenerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0135B330, void, set_Mask, (app::RocksGenerator * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x0135B3F0, void, ctor, (app::RocksGenerator * this_ptr))
} // namespace app::classes::RocksGenerator
