#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::GUITargetAttribute {
    IL2CPP_REGISTER_METHOD(0x029F7B80, int32_t, GetGUITargetAttrValue, (app::Type * klass, app::String* method_name))
}
