#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberShaderWrapper.h>
#include <Modloader/app/structs/UberShaderComponent.h>
#include <Modloader/app/structs/SerializableUberShaderWrapper.h>
#include <Modloader/app/structs/Sample.h>
#include <Modloader/app/structs/ModifierWrapper.h>
#include <Modloader/app/structs/UberShaderModifier.h>
#include <Modloader/app/structs/List_1_Moon_ArtOptimization_ModifierWrapper_.h>
#include <Modloader/app/structs/Dictionary_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_.h>
#include <Modloader/app/structs/Object_1.h>

namespace app::classes::Moon::ArtOptimization::UberShaderWrapper {
    IL2CPP_REGISTER_METHOD(0x00CB3690, void, ctor, (app::UberShaderWrapper * this_ptr, app::UberShaderComponent* uber_shader, app::SerializableUberShaderWrapper* serializable_wrapper))
    IL2CPP_REGISTER_METHOD(0x00CB3B00, void, SetFrustumState, (app::UberShaderWrapper * this_ptr, int32_t index, bool state))
    IL2CPP_REGISTER_METHOD(0x00CB3BC0, void, SetSample, (app::UberShaderWrapper * this_ptr, int32_t index, app::Sample* sample))
    IL2CPP_REGISTER_METHODINFO(0x0478C410, UberShaderWrapper_SetSample__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00CB3CF0, void, RecalculateEnergy, (app::UberShaderWrapper * this_ptr, app::Sample* sample))
    IL2CPP_REGISTER_METHODINFO(0x0473B3E8, UberShaderWrapper_RecalculateEnergy__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00CB3FD0, app::Sample*, GetSample, (app::UberShaderWrapper * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00CB40B0, void, CleanUp, (app::UberShaderWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CB42C0, app::ModifierWrapper*, GetOrCreateModifierWrapper, (app::UberShaderWrapper * this_ptr, app::UberShaderModifier* modifier))
    IL2CPP_REGISTER_METHOD(0x00CB4530, app::Sample*, GetMasterForModifier, (app::UberShaderWrapper * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00CB4600, bool, IsInsideFrustum, (app::UberShaderWrapper * this_ptr, int32_t sample_index))
    IL2CPP_REGISTER_METHOD(0x00446960, float, get_Energy, (app::UberShaderWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::List_1_Moon_ArtOptimization_ModifierWrapper_*, get_Modifiers, (app::UberShaderWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::Dictionary_2_UberShaderModifier_Moon_ArtOptimization_ModifierWrapper_*, get_ModifiersMap, (app::UberShaderWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetLocalIdentifierInFile, (app::Object_1 * obj))
} // namespace app::classes::Moon::ArtOptimization::UberShaderWrapper
