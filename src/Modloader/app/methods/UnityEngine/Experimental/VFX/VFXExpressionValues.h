#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/VFXExpressionValues.h>

namespace app::classes::UnityEngine::Experimental::VFX::VFXExpressionValues {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::VFXExpressionValues* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031C0D80, app::VFXExpressionValues*, CreateExpressionValuesWrapper, void* ptr)
} // namespace app::classes::UnityEngine::Experimental::VFX::VFXExpressionValues
