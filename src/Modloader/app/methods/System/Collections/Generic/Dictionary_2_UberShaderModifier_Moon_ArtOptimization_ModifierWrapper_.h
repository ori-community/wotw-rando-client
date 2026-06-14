#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_.h>
#include <Modloader/app/structs/ModifierWrapper.h>
#include <Modloader/app/structs/UberShaderModifier.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BA5090,
        bool,
        ContainsKey,
        app::Dictionary_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_* this_ptr,
        app::UberShaderModifier* key
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC140,
        void,
        set_Item,
        app::Dictionary_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_* this_ptr,
        app::UberShaderModifier* key,
        app::ModifierWrapper* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BD24D0,
        app::ModifierWrapper*,
        get_Item,
        app::Dictionary_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_* this_ptr,
        app::UberShaderModifier* key
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_
