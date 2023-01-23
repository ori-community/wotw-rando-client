#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TextAsset.h>
#include <Modloader/app/structs/Byte__Array.h>

namespace app::classes::UnityEngine::TextAsset {
    IL2CPP_REGISTER_METHOD(0x02C65C80, app::String*, get_text, (app::TextAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C65CD0, app::Byte__Array*, get_bytes, (app::TextAsset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C65C80, app::String*, ToString, (app::TextAsset * this_ptr))
} // namespace app::classes::UnityEngine::TextAsset
