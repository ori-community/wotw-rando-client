#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::EditorScene {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x00BF79B0, void, cctor, ())
} // namespace app::classes::EditorScene
