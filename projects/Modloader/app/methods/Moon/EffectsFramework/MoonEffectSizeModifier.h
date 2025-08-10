#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IMoonEffectComponentCache.h>
#include <Modloader/app/structs/MoonEffectGenericRevertibleData_MoonEffectRevertibleData.h>
#include <Modloader/app/structs/MoonEffectRevertHandle.h>
#include <Modloader/app/structs/MoonEffectSizeModifier.h>

namespace app::classes::Moon::EffectsFramework::MoonEffectSizeModifier {
    IL2CPP_REGISTER_METHOD(
        0x01983600,
        void,
        Apply,
        app::MoonEffectSizeModifier* this_ptr,
        app::IMoonEffectComponentCache* input,
        app::MoonEffectRevertHandle* revert_handle
    )
    IL2CPP_REGISTER_METHOD(0x01984100, void, Revert, app::MoonEffectSizeModifier* this_ptr, app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData* data)
    IL2CPP_REGISTER_METHOD(0x00858E20, void, ctor, app::MoonEffectSizeModifier* this_ptr)
} // namespace app::classes::Moon::EffectsFramework::MoonEffectSizeModifier
