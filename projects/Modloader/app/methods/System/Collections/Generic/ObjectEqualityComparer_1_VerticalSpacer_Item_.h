#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_VerticalSpacer_Item_.h>
#include <Modloader/app/structs/VerticalSpacer_Item.h>
#include <Modloader/app/structs/VerticalSpacer_Item__Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_VerticalSpacer_Item_ {
    IL2CPP_REGISTER_METHOD(0x01CD2410, bool, Equals_1, (app::ObjectEqualityComparer_1_VerticalSpacer_Item_ * this_ptr, app::VerticalSpacer_Item x, app::VerticalSpacer_Item y))
    IL2CPP_REGISTER_METHOD(0x01CD0900, int32_t, GetHashCode_1, (app::ObjectEqualityComparer_1_VerticalSpacer_Item_ * this_ptr, app::VerticalSpacer_Item obj))
    IL2CPP_REGISTER_METHOD(0x01CD24D0, int32_t, IndexOf, (app::ObjectEqualityComparer_1_VerticalSpacer_Item_ * this_ptr, app::VerticalSpacer_Item__Array* array, app::VerticalSpacer_Item value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01CD2660, int32_t, LastIndexOf, (app::ObjectEqualityComparer_1_VerticalSpacer_Item_ * this_ptr, app::VerticalSpacer_Item__Array* array, app::VerticalSpacer_Item value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, (app::ObjectEqualityComparer_1_VerticalSpacer_Item_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, (app::ObjectEqualityComparer_1_VerticalSpacer_Item_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, (app::ObjectEqualityComparer_1_VerticalSpacer_Item_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_VerticalSpacer_Item_
