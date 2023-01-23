#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_Moon_ActiveAnimationHandle_.h>
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/ActiveAnimationHandle__Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_Moon_ActiveAnimationHandle_ {
    IL2CPP_REGISTER_METHOD(0x02658C40, bool, Equals_1, (app::ObjectEqualityComparer_1_Moon_ActiveAnimationHandle_ * this_ptr, app::ActiveAnimationHandle x, app::ActiveAnimationHandle y))
    IL2CPP_REGISTER_METHOD(0x02658CA0, int32_t, GetHashCode_1, (app::ObjectEqualityComparer_1_Moon_ActiveAnimationHandle_ * this_ptr, app::ActiveAnimationHandle obj))
    IL2CPP_REGISTER_METHOD(0x02658CE0, int32_t, IndexOf, (app::ObjectEqualityComparer_1_Moon_ActiveAnimationHandle_ * this_ptr, app::ActiveAnimationHandle__Array* array, app::ActiveAnimationHandle value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02658DD0, int32_t, LastIndexOf, (app::ObjectEqualityComparer_1_Moon_ActiveAnimationHandle_ * this_ptr, app::ActiveAnimationHandle__Array* array, app::ActiveAnimationHandle value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, (app::ObjectEqualityComparer_1_Moon_ActiveAnimationHandle_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, (app::ObjectEqualityComparer_1_Moon_ActiveAnimationHandle_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, (app::ObjectEqualityComparer_1_Moon_ActiveAnimationHandle_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_Moon_ActiveAnimationHandle_
