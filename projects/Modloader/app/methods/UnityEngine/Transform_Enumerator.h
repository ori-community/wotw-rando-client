#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Transform_Enumerator.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::UnityEngine::Transform_Enumerator {
    IL2CPP_REGISTER_METHOD(0x01DC2A00, void, ctor, (app::Transform_Enumerator * this_ptr, app::Transform* outer))
    IL2CPP_REGISTER_METHOD(0x02C6FDA0, app::Object*, get_Current, (app::Transform_Enumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C6FE10, bool, MoveNext, (app::Transform_Enumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C2BCA0, void, Reset, (app::Transform_Enumerator * this_ptr))
} // namespace app::classes::UnityEngine::Transform_Enumerator
