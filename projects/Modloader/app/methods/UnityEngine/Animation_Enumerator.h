#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Animation_Enumerator.h>
#include <Modloader/app/structs/Animation.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::UnityEngine::Animation_Enumerator {
    IL2CPP_REGISTER_METHOD(0x01DC2A00, void, ctor, (app::Animation_Enumerator * this_ptr, app::Animation* outer))
    IL2CPP_REGISTER_METHOD(0x0307B130, app::Object*, get_Current, (app::Animation_Enumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0307B1A0, bool, MoveNext, (app::Animation_Enumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C2BCA0, void, Reset, (app::Animation_Enumerator * this_ptr))
} // namespace app::classes::UnityEngine::Animation_Enumerator
