#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::MistyWoodsKuroGameplayController {
    IL2CPP_REGISTER_METHOD(0x01328EF0, bool, get_IsHidden, (app::MistyWoodsKuroGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01328F10, void, ChangeState, (app::MistyWoodsKuroGameplayController * this_ptr, app::MistyWoodsKuroGameplayController_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x01328F30, void, Awake, (app::MistyWoodsKuroGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01329000, void, OnDestroy, (app::MistyWoodsKuroGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013290A0, void, KillPlayer, (app::MistyWoodsKuroGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01329760, void, FixedUpdate, (app::MistyWoodsKuroGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01329AE0, void, OnHide, (app::MistyWoodsKuroGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01329F30, void, OnVisible, (app::MistyWoodsKuroGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0132A380, bool, InstaKillZonesContain, (app::MistyWoodsKuroGameplayController * this_ptr, app::Vector2 position))
    IL2CPP_REGISTER_METHOD(0x0132A650, void, Serialize, (app::MistyWoodsKuroGameplayController * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x008519A0, bool, get_IsSuspended, (app::MistyWoodsKuroGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008519B0, void, set_IsSuspended, (app::MistyWoodsKuroGameplayController * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x008519C0, app::SuspendableMask__Enum, get_Mask, (app::MistyWoodsKuroGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0132A6D0, void, set_Mask, (app::MistyWoodsKuroGameplayController * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x0132A790, void, ctor, (app::MistyWoodsKuroGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0132A7C0, void, _OnHide_b__25_0, (app::MistyWoodsKuroGameplayController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047695D0, MistyWoodsKuroGameplayController__OnHide_b__25_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0132A7C0, void, _OnVisible_b__26_0, (app::MistyWoodsKuroGameplayController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04719DF0, MistyWoodsKuroGameplayController__OnVisible_b__26_0__MethodInfo)
} // namespace app::classes::MistyWoodsKuroGameplayController
