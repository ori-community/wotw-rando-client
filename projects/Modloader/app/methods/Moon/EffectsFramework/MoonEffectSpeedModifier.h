#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IMoonEffectComponentCache.h>
#include <Modloader/app/structs/MoonEffectGenericRevertibleData_MoonEffectRevertibleData.h>
#include <Modloader/app/structs/MoonEffectRevertHandle.h>
#include <Modloader/app/structs/MoonEffectSpeedModifier.h>

namespace app::classes::Moon::EffectsFramework::MoonEffectSpeedModifier {
    IL2CPP_REGISTER_METHOD(
        0x01984540,
        void,
        Apply,
        app::MoonEffectSpeedModifier* this_ptr,
        app::IMoonEffectComponentCache* input,
        app::MoonEffectRevertHandle* revert_handle
    )
    IL2CPP_REGISTER_METHOD(
        0x01985E30,
        void,
        Revert,
        app::MoonEffectSpeedModifier* this_ptr,
        app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData* data
    )
    IL2CPP_REGISTER_METHOD(0x019865D0, void, ctor, app::MoonEffectSpeedModifier* this_ptr)
} // namespace app::classes::Moon::EffectsFramework::MoonEffectSpeedModifier
