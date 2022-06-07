#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LegacyPressurePlate {
    IL2CPP_REGISTER_METHOD(0x00A31F10, void, Update, (app::LegacyPressurePlate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A32090, bool, IsTargetAllowed, (app::LegacyPressurePlate * this_ptr, app::LegacyPressurePlate_Target__Enum target))
    IL2CPP_REGISTER_METHOD(0x00A320A0, app::ICanActivatePressurePlate *, FilterTarget, (app::LegacyPressurePlate * this_ptr, app::GameObject * target))
    IL2CPP_REGISTER_METHOD(0x00A32200, void, AddPressing, (app::LegacyPressurePlate * this_ptr, app::ICanActivatePressurePlate * target, bool force_add))
    IL2CPP_REGISTER_METHOD(0x00A324E0, void, RemovePressing, (app::LegacyPressurePlate * this_ptr, app::ICanActivatePressurePlate * target))
    IL2CPP_REGISTER_METHOD(0x00A32610, void, OnCollisionEnter, (app::LegacyPressurePlate * this_ptr, app::Collision * collision))
    IL2CPP_REGISTER_METHOD(0x00A32620, void, OnCollisionStay, (app::LegacyPressurePlate * this_ptr, app::Collision * collision))
    IL2CPP_REGISTER_METHOD(0x00A32630, void, OnCollision, (app::LegacyPressurePlate * this_ptr, app::Collision * collision, bool force_add))
    IL2CPP_REGISTER_METHOD(0x00A328C0, void, OnCollisionExit, (app::LegacyPressurePlate * this_ptr, app::Collision * collision))
    IL2CPP_REGISTER_METHOD(0x00A32960, void, ctor, (app::LegacyPressurePlate * this_ptr))
}
