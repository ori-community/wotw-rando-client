#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/UberInteractionManager_InteractionCurve.h>

namespace app::classes::UberInteractionManager_InteractionCurve {
    IL2CPP_REGISTER_METHOD(0x00C3DD50, float, get_Scale, app::UberInteractionManager_InteractionCurve* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C3DD60, void, set_Scale, app::UberInteractionManager_InteractionCurve* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x013FE8B0, float, get_Duration, app::UberInteractionManager_InteractionCurve* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013FE990, int32_t, get_CurveName, app::UberInteractionManager_InteractionCurve* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013FEA90, int32_t, get_CurveSettingsName, app::UberInteractionManager_InteractionCurve* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013FEB90, void, UpdateTexture, app::UberInteractionManager_InteractionCurve* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013FECC0, app::Texture2D*, GetTexture, app::UberInteractionManager_InteractionCurve* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013FED80, void, ctor, app::UberInteractionManager_InteractionCurve* this_ptr)
} // namespace app::classes::UberInteractionManager_InteractionCurve
