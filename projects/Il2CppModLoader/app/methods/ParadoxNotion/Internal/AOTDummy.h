#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ParadoxNotion::Internal::AOTDummy {
    IL2CPP_REGISTER_METHOD(0x00444050, void, Moon_BehaviourSystem_IBlackboard_SetValue, (app::AOTDummy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004440C0, void, Moon_BehaviourSystem_IBlackboard_GetValue, (app::AOTDummy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00444130, void, Moon_BehaviourSystem_IBlackboard_IsMoonTypeProxy, (app::AOTDummy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004441A0, void, Moon_BehaviourSystem_IBlackboard_GetProxyType, (app::AOTDummy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004441F0, void, Moon_DynamicDataResolver_IsMoonTypeProxy, (app::AOTDummy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00444260, void, Moon_DynamicDataResolver_GetProxyType, (app::AOTDummy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004442D0, void, MoonReference_SafeResolve, (app::AOTDummy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CustomSpoof, (app::AOTDummy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AOTDummy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00444340, void, cctor, ())
} // namespace app::classes::ParadoxNotion::Internal::AOTDummy
