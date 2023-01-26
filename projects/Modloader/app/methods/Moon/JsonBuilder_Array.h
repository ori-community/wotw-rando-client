#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JsonBuilder_Array__Boxed.h>
#include <Modloader/app/structs/JsonBuilder.h>
#include <Modloader/app/structs/JsonBuilder_Slot.h>

namespace app::classes::Moon::JsonBuilder_Array {
    IL2CPP_REGISTER_METHOD(0x002453D0, void, ctor, (app::JsonBuilder_Array__Boxed * this_ptr, int32_t ident, app::JsonBuilder* builder))
    IL2CPP_REGISTER_METHOD(0x002453E0, void, Dispose, (app::JsonBuilder_Array__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002453F0, app::JsonBuilder_Slot, Slot, (app::JsonBuilder_Array__Boxed * this_ptr))
} // namespace app::classes::Moon::JsonBuilder_Array
