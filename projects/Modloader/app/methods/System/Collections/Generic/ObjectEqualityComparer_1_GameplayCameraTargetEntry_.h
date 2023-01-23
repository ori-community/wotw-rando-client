#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_GameplayCameraTargetEntry_.h>
#include <Modloader/app/structs/GameplayCameraTargetEntry.h>
#include <Modloader/app/structs/GameplayCameraTargetEntry__Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_GameplayCameraTargetEntry_ {
    IL2CPP_REGISTER_METHOD(0x01CD0C40, bool, Equals_1, (app::ObjectEqualityComparer_1_GameplayCameraTargetEntry_ * this_ptr, app::GameplayCameraTargetEntry x, app::GameplayCameraTargetEntry y))
    IL2CPP_REGISTER_METHOD(0x01CD0900, int32_t, GetHashCode_1, (app::ObjectEqualityComparer_1_GameplayCameraTargetEntry_ * this_ptr, app::GameplayCameraTargetEntry obj))
    IL2CPP_REGISTER_METHOD(0x01CD0D00, int32_t, IndexOf, (app::ObjectEqualityComparer_1_GameplayCameraTargetEntry_ * this_ptr, app::GameplayCameraTargetEntry__Array* array, app::GameplayCameraTargetEntry value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01CD0E90, int32_t, LastIndexOf, (app::ObjectEqualityComparer_1_GameplayCameraTargetEntry_ * this_ptr, app::GameplayCameraTargetEntry__Array* array, app::GameplayCameraTargetEntry value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, (app::ObjectEqualityComparer_1_GameplayCameraTargetEntry_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, (app::ObjectEqualityComparer_1_GameplayCameraTargetEntry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, (app::ObjectEqualityComparer_1_GameplayCameraTargetEntry_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_GameplayCameraTargetEntry_
