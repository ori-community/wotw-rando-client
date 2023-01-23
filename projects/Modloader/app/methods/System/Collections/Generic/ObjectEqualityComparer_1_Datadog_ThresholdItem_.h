#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_Datadog_ThresholdItem_.h>
#include <Modloader/app/structs/Datadog_ThresholdItem.h>
#include <Modloader/app/structs/Datadog_ThresholdItem__Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_Datadog_ThresholdItem_ {
    IL2CPP_REGISTER_METHOD(0x01CD0840, bool, Equals_1, (app::ObjectEqualityComparer_1_Datadog_ThresholdItem_ * this_ptr, app::Datadog_ThresholdItem x, app::Datadog_ThresholdItem y))
    IL2CPP_REGISTER_METHOD(0x01CD0900, int32_t, GetHashCode_1, (app::ObjectEqualityComparer_1_Datadog_ThresholdItem_ * this_ptr, app::Datadog_ThresholdItem obj))
    IL2CPP_REGISTER_METHOD(0x01CD0960, int32_t, IndexOf, (app::ObjectEqualityComparer_1_Datadog_ThresholdItem_ * this_ptr, app::Datadog_ThresholdItem__Array* array, app::Datadog_ThresholdItem value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01CD0AD0, int32_t, LastIndexOf, (app::ObjectEqualityComparer_1_Datadog_ThresholdItem_ * this_ptr, app::Datadog_ThresholdItem__Array* array, app::Datadog_ThresholdItem value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, (app::ObjectEqualityComparer_1_Datadog_ThresholdItem_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, (app::ObjectEqualityComparer_1_Datadog_ThresholdItem_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, (app::ObjectEqualityComparer_1_Datadog_ThresholdItem_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_Datadog_ThresholdItem_
