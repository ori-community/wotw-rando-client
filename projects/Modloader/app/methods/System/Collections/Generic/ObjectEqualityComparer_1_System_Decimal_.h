#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ObjectEqualityComparer_1_System_Decimal_.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/Decimal__Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_System_Decimal_ {
    IL2CPP_REGISTER_METHOD(0x0265B5E0, bool, Equals_1, (app::ObjectEqualityComparer_1_System_Decimal_ * this_ptr, app::Decimal x, app::Decimal y))
    IL2CPP_REGISTER_METHOD(0x0265B640, int32_t, GetHashCode_1, (app::ObjectEqualityComparer_1_System_Decimal_ * this_ptr, app::Decimal obj))
    IL2CPP_REGISTER_METHOD(0x0265B690, int32_t, IndexOf, (app::ObjectEqualityComparer_1_System_Decimal_ * this_ptr, app::Decimal__Array* array, app::Decimal value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x0265B780, int32_t, LastIndexOf, (app::ObjectEqualityComparer_1_System_Decimal_ * this_ptr, app::Decimal__Array* array, app::Decimal value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, (app::ObjectEqualityComparer_1_System_Decimal_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, (app::ObjectEqualityComparer_1_System_Decimal_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, (app::ObjectEqualityComparer_1_System_Decimal_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_System_Decimal_
