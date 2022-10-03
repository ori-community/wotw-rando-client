#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::Experimental::Rendering::ScriptableCullingParameters {
    IL2CPP_REGISTER_METHOD(0x001F1C90, app::CullFlag__Enum, get_cullingFlags, (app::ScriptableCullingParameters__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010F680, void, set_cullingFlags, (app::ScriptableCullingParameters__Boxed * this_ptr, app::CullFlag__Enum value))
} // namespace app::classes::UnityEngine::Experimental::Rendering::ScriptableCullingParameters
