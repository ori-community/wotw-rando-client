#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MistyWoodsKuroController {
    IL2CPP_REGISTER_METHOD(0x01327FB0, bool, get_IsHunting, (app::MistyWoodsKuroController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01327FC0, void, Awake, (app::MistyWoodsKuroController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01328340, void, OnAnimationEnded, (app::MistyWoodsKuroController * this_ptr, app::TextureAnimation * animation))
    IL2CPP_REGISTER_METHODINFO(0x0475DF38, MistyWoodsKuroController_OnAnimationEnded__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x013284C0, void, OnDestroy, (app::MistyWoodsKuroController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8E90, void, FixedUpdate, (app::MistyWoodsKuroController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01328560, void, ChangeState, (app::MistyWoodsKuroController * this_ptr, app::MistyWoodsKuroController_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x013287B0, void, PlayIdleSound, (app::MistyWoodsKuroController * this_ptr, app::TextureAnimation * not_used))
    IL2CPP_REGISTER_METHODINFO(0x04738488, MistyWoodsKuroController_PlayIdleSound__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::MistyWoodsKuroController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01328880, void, OnHide, (app::MistyWoodsKuroController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01328A70, void, OnVisible, (app::MistyWoodsKuroController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01328C60, void, KillPlayer, (app::MistyWoodsKuroController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01328DC0, void, Serialize, (app::MistyWoodsKuroController * this_ptr, app::Archive * ar))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DebugLog, (app::MistyWoodsKuroController * this_ptr, app::String * str))
    IL2CPP_REGISTER_METHOD(0x0049C020, bool, get_IsSuspended, (app::MistyWoodsKuroController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0049C030, void, set_IsSuspended, (app::MistyWoodsKuroController * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FF610, app::SuspendableMask__Enum, get_Mask, (app::MistyWoodsKuroController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01328E40, void, set_Mask, (app::MistyWoodsKuroController * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x0049C0F0, void, ctor, (app::MistyWoodsKuroController * this_ptr))
}
