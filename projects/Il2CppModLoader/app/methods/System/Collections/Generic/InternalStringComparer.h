#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::InternalStringComparer {
    IL2CPP_REGISTER_METHOD(0x02022440, int32_t, GetHashCode, (app::InternalStringComparer * this_ptr, app::String * obj))
    IL2CPP_REGISTER_METHOD(0x02022460, bool, Equals, (app::InternalStringComparer * this_ptr, app::String * x, app::String * y))
    IL2CPP_REGISTER_METHOD(0x02022490, int32_t, IndexOf, (app::InternalStringComparer * this_ptr, app::String__Array * array, app::String * value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02022530, void, ctor, (app::InternalStringComparer * this_ptr))
}
