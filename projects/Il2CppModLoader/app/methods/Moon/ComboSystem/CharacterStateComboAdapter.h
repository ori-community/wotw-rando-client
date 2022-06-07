#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::ComboSystem::CharacterStateComboAdapter {
    IL2CPP_REGISTER_METHOD(0x00CC50C0, void, OnInitialize, (app::CharacterStateComboAdapter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC5250, void, EnterMove, (app::CharacterStateComboAdapter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC5280, void, UpdateMove, (app::CharacterStateComboAdapter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0097FDC0, void, ExitMove, (app::CharacterStateComboAdapter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC53A0, bool, get_IsAttackButtonDown, (app::CharacterStateComboAdapter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC5530, bool, get_OnAttackButtonPressed, (app::CharacterStateComboAdapter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC56C0, bool, get_OnAttackButtonReleased, (app::CharacterStateComboAdapter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ModifyGravityPlatformMovementSettings, (app::CharacterStateComboAdapter * this_ptr, app::GravityPlatformMovementSettings * settings))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ModifyHorizontalPlatformMovementSettings, (app::CharacterStateComboAdapter * this_ptr, app::HorizontalPlatformMovementSettings * settings))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAnimationEvent, (app::CharacterStateComboAdapter * this_ptr, app::SeinController3D_EventId__Enum event_id))
    IL2CPP_REGISTER_METHOD(0x00CC5850, void, ctor, (app::CharacterStateComboAdapter * this_ptr))
}
