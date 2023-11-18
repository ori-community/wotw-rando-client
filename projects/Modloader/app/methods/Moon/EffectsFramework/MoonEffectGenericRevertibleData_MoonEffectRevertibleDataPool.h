#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Stack_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleData_.h>
#include <Modloader/app/structs/MoonEffectGenericRevertibleData_MoonEffectRevertibleData.h>
#include <Modloader/app/structs/MoonEffectGenericRevertibleData_MoonEffectRevertibleDataPool.h>

namespace app::classes::Moon::EffectsFramework::MoonEffectGenericRevertibleData_MoonEffectRevertibleDataPool {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Stack_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleData_*, get_Instances, (app::MoonEffectGenericRevertibleData_MoonEffectRevertibleDataPool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Instances, (app::MoonEffectGenericRevertibleData_MoonEffectRevertibleDataPool * this_ptr, app::Stack_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleData_* value))
    IL2CPP_REGISTER_METHOD(0x019818C0, void, ctor, (app::MoonEffectGenericRevertibleData_MoonEffectRevertibleDataPool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01981A30, app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData*, CreateNewInstance, (app::MoonEffectGenericRevertibleData_MoonEffectRevertibleDataPool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01981B70, void, Clear, (app::MoonEffectGenericRevertibleData_MoonEffectRevertibleDataPool * this_ptr))
} // namespace app::classes::Moon::EffectsFramework::MoonEffectGenericRevertibleData_MoonEffectRevertibleDataPool
