#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/OrdinalComparer.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::OrdinalComparer {
    IL2CPP_REGISTER_METHOD(0x0227C1D0, void, ctor, (app::OrdinalComparer * this_ptr, bool ignore_case))
    IL2CPP_REGISTER_METHOD(0x0227C270, int32_t, Compare, (app::OrdinalComparer * this_ptr, app::String* x, app::String* y))
    IL2CPP_REGISTER_METHOD(0x0227C3C0, bool, Equals_1, (app::OrdinalComparer * this_ptr, app::String* x, app::String* y))
    IL2CPP_REGISTER_METHOD(0x0227C520, int32_t, GetHashCode_1, (app::OrdinalComparer * this_ptr, app::String* obj))
    IL2CPP_REGISTER_METHOD(0x0227C630, bool, Equals_2, (app::OrdinalComparer * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x0227C6F0, int32_t, GetHashCode_2, (app::OrdinalComparer * this_ptr))
} // namespace app::classes::System::OrdinalComparer
