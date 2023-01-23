#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ObjectComparer_1_Moon_Trail_Point_.h>
#include <Modloader/app/structs/Trail_Point.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::ObjectComparer_1_Moon_Trail_Point_ {
    IL2CPP_REGISTER_METHOD(0x01CC6CC0, int32_t, Compare, (app::ObjectComparer_1_Moon_Trail_Point_ * this_ptr, app::Trail_Point x, app::Trail_Point y))
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals, (app::ObjectComparer_1_Moon_Trail_Point_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode, (app::ObjectComparer_1_Moon_Trail_Point_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, (app::ObjectComparer_1_Moon_Trail_Point_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::ObjectComparer_1_Moon_Trail_Point_
