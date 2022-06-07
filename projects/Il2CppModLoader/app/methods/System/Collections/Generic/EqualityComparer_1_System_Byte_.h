#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::EqualityComparer_1_System_Byte_ {
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::EqualityComparer_1_System_Byte_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475E548, EqualityComparer_1_System_Byte___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_System_Byte_ *, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x02D9B500, app::EqualityComparer_1_System_Byte_ *, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x02D9B130, int32_t, IndexOf, (app::EqualityComparer_1_System_Byte_ * this_ptr, app::Byte__Array * array, uint8_t value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02D9B1E0, int32_t, LastIndexOf, (app::EqualityComparer_1_System_Byte_ * this_ptr, app::Byte__Array * array, uint8_t value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02D9B290, int32_t, IEqualityComparer_GetHashCode, (app::EqualityComparer_1_System_Byte_ * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x02D9B380, bool, IEqualityComparer_Equals, (app::EqualityComparer_1_System_Byte_ * this_ptr, app::Object * x, app::Object * y))
}
