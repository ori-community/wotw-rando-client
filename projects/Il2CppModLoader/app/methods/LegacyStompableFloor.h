#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::LegacyStompableFloor {
    IL2CPP_REGISTER_METHOD(0x00A37AF0, void, Awake, (app::LegacyStompableFloor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A37CB0, void, OnDestroy, (app::LegacyStompableFloor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A37E70, void, OnModifyDamage, (app::LegacyStompableFloor * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHODINFO(0x0476ECB0, LegacyStompableFloor_OnModifyDamage__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00443680, void, ctor, (app::LegacyStompableFloor * this_ptr))
} // namespace app::classes::LegacyStompableFloor
