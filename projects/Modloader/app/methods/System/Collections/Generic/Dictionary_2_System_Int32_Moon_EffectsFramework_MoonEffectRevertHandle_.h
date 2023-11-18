#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Int32_Moon_EffectsFramework_MoonEffectRevertHandle_.h>
#include <Modloader/app/structs/MoonEffectRevertHandle.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_Moon_EffectsFramework_MoonEffectRevertHandle_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_Int32_Moon_EffectsFramework_MoonEffectRevertHandle_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_Int32_Moon_EffectsFramework_MoonEffectRevertHandle_ * this_ptr, int32_t key, app::MoonEffectRevertHandle** value))
    IL2CPP_REGISTER_METHOD(0x02BBA360, bool, Remove, (app::Dictionary_2_System_Int32_Moon_EffectsFramework_MoonEffectRevertHandle_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_Int32_Moon_EffectsFramework_MoonEffectRevertHandle_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_Int32_Moon_EffectsFramework_MoonEffectRevertHandle_ * this_ptr, int32_t key, app::MoonEffectRevertHandle* value))
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_Int32_Moon_EffectsFramework_MoonEffectRevertHandle_ * this_ptr, int32_t key, app::MoonEffectRevertHandle* value))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_Moon_EffectsFramework_MoonEffectRevertHandle_
