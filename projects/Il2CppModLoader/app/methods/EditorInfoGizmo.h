#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::EditorInfoGizmo {
    IL2CPP_REGISTER_METHOD(0x00BF7680, void, DrawInfoGizmo, (app::GameObject * go, app::String__Array* strings))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EditorInfoGizmo * this_ptr))
} // namespace app::classes::EditorInfoGizmo
