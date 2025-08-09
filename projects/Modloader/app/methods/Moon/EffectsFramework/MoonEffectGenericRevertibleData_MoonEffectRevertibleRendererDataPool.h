#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData.h>
#include <Modloader/app/structs/MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererDataPool.h>
#include <Modloader/app/structs/Stack_1_Moo_EffectsFramewor_MoonEffectGenericRevertibleDat_MoonEffectRevertibleRendererDa_.h>

namespace app::classes::Moon::EffectsFramework::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererDataPool {
    IL2CPP_REGISTER_METHOD(
        0x002FA280,
        app::Stack_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData_*,
        get_Instances,
        app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererDataPool* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x002FA490,
        void,
        set_Instances,
        app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererDataPool* this_ptr,
        app::Stack_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData_* value
    )
    IL2CPP_REGISTER_METHOD(0x01981FA0, void, ctor, app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererDataPool* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01982110,
        app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData*,
        CreateNewInstance,
        app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererDataPool* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x01982250, void, Clear, app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererDataPool* this_ptr)
} // namespace app::classes::Moon::EffectsFramework::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererDataPool
