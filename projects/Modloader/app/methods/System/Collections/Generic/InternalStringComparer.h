#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/InternalStringComparer.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::System::Collections::Generic::InternalStringComparer {
    IL2CPP_REGISTER_METHOD(0x02022440, int32_t, GetHashCode, (app::InternalStringComparer * this_ptr, app::String* obj))
    IL2CPP_REGISTER_METHOD(0x02022460, bool, Equals, (app::InternalStringComparer * this_ptr, app::String* x, app::String* y))
    IL2CPP_REGISTER_METHOD(0x02022490, int32_t, IndexOf, (app::InternalStringComparer * this_ptr, app::String__Array* array, app::String* value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02022530, void, ctor, (app::InternalStringComparer * this_ptr))
} // namespace app::classes::System::Collections::Generic::InternalStringComparer
