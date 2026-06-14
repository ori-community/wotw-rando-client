#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Decimal__Array.h>
#include <Modloader/app/structs/TypedObject_DecimalStruct.h>

namespace app::classes::System::Xml::Schema::TypedObject_DecimalStruct {
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_IsDecimal, app::TypedObject_DecimalStruct* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052C650, void, set_IsDecimal, app::TypedObject_DecimalStruct* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Decimal__Array*, get_Dvalue, app::TypedObject_DecimalStruct* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01ABD870, void, ctor_1, app::TypedObject_DecimalStruct* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01ABD900, void, ctor_2, app::TypedObject_DecimalStruct* this_ptr, int32_t dim)
} // namespace app::classes::System::Xml::Schema::TypedObject_DecimalStruct
