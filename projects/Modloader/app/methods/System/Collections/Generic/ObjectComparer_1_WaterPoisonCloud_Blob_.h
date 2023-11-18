#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ObjectComparer_1_WaterPoisonCloud_Blob_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/WaterPoisonCloud_Blob.h>

namespace app::classes::System::Collections::Generic::ObjectComparer_1_WaterPoisonCloud_Blob_ {
    IL2CPP_REGISTER_METHOD(0x01CCFFB0, int32_t, Compare, (app::ObjectComparer_1_WaterPoisonCloud_Blob_ * this_ptr, app::WaterPoisonCloud_Blob x, app::WaterPoisonCloud_Blob y))
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals, (app::ObjectComparer_1_WaterPoisonCloud_Blob_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode, (app::ObjectComparer_1_WaterPoisonCloud_Blob_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, (app::ObjectComparer_1_WaterPoisonCloud_Blob_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::ObjectComparer_1_WaterPoisonCloud_Blob_
