#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array_InternalEnumerator_1_VerticalSpacer_Item___Boxed.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/VerticalSpacer_Item.h>

namespace app::classes::System::Array_InternalEnumerator_1_VerticalSpacer_Item_ {
    IL2CPP_REGISTER_METHOD(0x00160580, void, ctor, (app::Array_InternalEnumerator_1_VerticalSpacer_Item___Boxed * this_ptr, app::Array* array))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::Array_InternalEnumerator_1_VerticalSpacer_Item___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00160590, bool, MoveNext, (app::Array_InternalEnumerator_1_VerticalSpacer_Item___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00177F10, app::VerticalSpacer_Item, get_Current, (app::Array_InternalEnumerator_1_VerticalSpacer_Item___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00160610, void, IEnumerator_Reset, (app::Array_InternalEnumerator_1_VerticalSpacer_Item___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00177F40, app::Object*, IEnumerator_get_Current, (app::Array_InternalEnumerator_1_VerticalSpacer_Item___Boxed * this_ptr))
} // namespace app::classes::System::Array_InternalEnumerator_1_VerticalSpacer_Item_
