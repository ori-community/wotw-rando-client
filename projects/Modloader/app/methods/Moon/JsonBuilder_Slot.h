#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JsonBuilder_Slot__Boxed.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/JsonBuilder.h>
#include <Modloader/app/structs/JsonBuilder_Array.h>
#include <Modloader/app/structs/JsonBuilder_Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::JsonBuilder_Slot {
    IL2CPP_REGISTER_METHOD(0x0013C010, void, ctor, (app::JsonBuilder_Slot__Boxed * this_ptr, int32_t ident, app::JsonBuilder* builder))
    IL2CPP_REGISTER_METHOD(0x002454B0, void, Validate, (app::JsonBuilder_Slot__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002454C0, void, WriteRawUnsafe, (app::JsonBuilder_Slot__Boxed * this_ptr, app::String* json_value_string))
    IL2CPP_REGISTER_METHOD(0x00245510, void, WriteNull, (app::JsonBuilder_Slot__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00245520, void, Write_1, (app::JsonBuilder_Slot__Boxed * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x00245530, void, Write_2, (app::JsonBuilder_Slot__Boxed * this_ptr, app::String* value, int32_t start, int32_t length))
    IL2CPP_REGISTER_METHOD(0x00245690, void, Write_3, (app::JsonBuilder_Slot__Boxed * this_ptr, app::DateTime value))
    IL2CPP_REGISTER_METHOD(0x002456D0, void, Write_4, (app::JsonBuilder_Slot__Boxed * this_ptr, app::Guid value))
    IL2CPP_REGISTER_METHOD(0x002456F0, void, Write_5, (app::JsonBuilder_Slot__Boxed * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00245700, void, Write_6, (app::JsonBuilder_Slot__Boxed * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00245710, void, Write_7, (app::JsonBuilder_Slot__Boxed * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x00245750, void, Write_8, (app::JsonBuilder_Slot__Boxed * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x00245760, void, Write_9, (app::JsonBuilder_Slot__Boxed * this_ptr, uint64_t value))
    IL2CPP_REGISTER_METHOD(0x002457B0, void, Write_10, (app::JsonBuilder_Slot__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x002457C0, void, Write_11, (app::JsonBuilder_Slot__Boxed * this_ptr, double value))
    IL2CPP_REGISTER_METHOD(0x002457D0, app::JsonBuilder_Object, BuildObject, (app::JsonBuilder_Slot__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00245830, app::JsonBuilder_Array, BuildArray, (app::JsonBuilder_Slot__Boxed * this_ptr))
} // namespace app::classes::Moon::JsonBuilder_Slot
