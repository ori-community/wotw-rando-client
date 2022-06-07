#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::TextAsset {
    IL2CPP_REGISTER_METHOD(0x02C65C80, app::String *, get_text, (app::TextAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C65CD0, app::Byte__Array *, get_bytes, (app::TextAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C65C80, app::String *, ToString, (app::TextAsset * this_ptr))
}
