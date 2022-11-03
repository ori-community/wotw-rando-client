#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::UI::Misc {
    IL2CPP_REGISTER_METHOD(0x026627C0, void, Destroy, (app::Object_1 * obj))
    IL2CPP_REGISTER_METHOD(0x026628D0, void, DestroyImmediate, (app::Object_1 * obj))
} // namespace app::classes::UnityEngine::UI::Misc
