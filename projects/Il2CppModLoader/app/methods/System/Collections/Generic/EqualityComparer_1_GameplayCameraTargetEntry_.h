#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::EqualityComparer_1_GameplayCameraTargetEntry_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_GameplayCameraTargetEntry_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x02CCDCC0, app::EqualityComparer_1_GameplayCameraTargetEntry_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x02B49B00, int32_t, IndexOf, (app::EqualityComparer_1_GameplayCameraTargetEntry_ * this_ptr, app::GameplayCameraTargetEntry__Array* array, app::GameplayCameraTargetEntry value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B49BF0, int32_t, LastIndexOf, (app::EqualityComparer_1_GameplayCameraTargetEntry_ * this_ptr, app::GameplayCameraTargetEntry__Array* array, app::GameplayCameraTargetEntry value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B49CE0, int32_t, IEqualityComparer_GetHashCode, (app::EqualityComparer_1_GameplayCameraTargetEntry_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02B49DE0, bool, IEqualityComparer_Equals, (app::EqualityComparer_1_GameplayCameraTargetEntry_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::EqualityComparer_1_GameplayCameraTargetEntry_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::EqualityComparer_1_GameplayCameraTargetEntry_
