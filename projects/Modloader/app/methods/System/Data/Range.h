#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Range__Boxed.h>

namespace app::classes::System::Data::Range {
    IL2CPP_REGISTER_METHOD(0x001D5BC0, void, ctor, (app::Range__Boxed * this_ptr, int32_t min, int32_t max))
    IL2CPP_REGISTER_METHOD(0x001D5BD0, int32_t, get_Count, (app::Range__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D5BF0, bool, get_IsNull, (app::Range__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D5C00, int32_t, get_Min, (app::Range__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D5C20, void, CheckNull, (app::Range__Boxed * this_ptr))
} // namespace app::classes::System::Data::Range
