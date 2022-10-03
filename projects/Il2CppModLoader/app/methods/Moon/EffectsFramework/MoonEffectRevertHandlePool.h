#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::EffectsFramework::MoonEffectRevertHandlePool {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Stack_1_Moon_EffectsFramework_MoonEffectRevertHandle_*, get_Instances, (app::MoonEffectRevertHandlePool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Instances, (app::MoonEffectRevertHandlePool * this_ptr, app::Stack_1_Moon_EffectsFramework_MoonEffectRevertHandle_* value))
    IL2CPP_REGISTER_METHOD(0x01982CA0, void, ctor, (app::MoonEffectRevertHandlePool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01982E10, app::MoonEffectRevertHandle*, CreateNewInstance, (app::MoonEffectRevertHandlePool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01982F50, void, Clear, (app::MoonEffectRevertHandlePool * this_ptr))
} // namespace app::classes::Moon::EffectsFramework::MoonEffectRevertHandlePool
