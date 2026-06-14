#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JsonBuilder.h>
#include <Modloader/app/structs/JsonBuilder_Object__Boxed.h>
#include <Modloader/app/structs/JsonBuilder_Slot.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::JsonBuilder_Object {
    IL2CPP_REGISTER_METHOD(0x00245440, void, ctor, app::JsonBuilder_Object__Boxed* this_ptr, int32_t ident, app::JsonBuilder* builder)
    IL2CPP_REGISTER_METHOD(0x00245450, void, Dispose, app::JsonBuilder_Object__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00245460, app::JsonBuilder_Slot, Slot, app::JsonBuilder_Object__Boxed* this_ptr, app::String* property_name)
} // namespace app::classes::Moon::JsonBuilder_Object
