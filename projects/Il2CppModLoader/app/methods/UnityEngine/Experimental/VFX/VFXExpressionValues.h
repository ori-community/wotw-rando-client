#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Experimental::VFX::VFXExpressionValues {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::VFXExpressionValues * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031C0D80, app::VFXExpressionValues *, CreateExpressionValuesWrapper, (void * ptr))
}
