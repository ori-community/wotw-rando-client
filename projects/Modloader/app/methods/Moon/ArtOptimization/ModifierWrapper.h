#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ModifierWrapper.h>
#include <Modloader/app/structs/Sample.h>
#include <Modloader/app/structs/SerializableUberSaderModifierWrapper.h>
#include <Modloader/app/structs/UberShaderModifier.h>

namespace app::classes::Moon::ArtOptimization::ModifierWrapper {
    IL2CPP_REGISTER_METHOD(
        0x0134CF00,
        void,
        ctor,
        app::ModifierWrapper* this_ptr,
        int32_t id,
        app::UberShaderModifier* modifier,
        app::SerializableUberSaderModifierWrapper* serializable_modifier_wrapper
    )
    IL2CPP_REGISTER_METHOD(0x0134D0C0, void, SetSample, app::ModifierWrapper* this_ptr, int32_t index, app::Sample* sample)
    IL2CPP_REGISTER_METHOD(0x0134D1F0, void, RecalculateEnergy, app::ModifierWrapper* this_ptr, app::Sample* sample)
    IL2CPP_REGISTER_METHOD(0x0134D4D0, app::Sample*, GetSample, app::ModifierWrapper* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x0134D5B0, void, CleanUp, app::ModifierWrapper* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C3DD50, float, get_Energy, app::ModifierWrapper* this_ptr)
} // namespace app::classes::Moon::ArtOptimization::ModifierWrapper
