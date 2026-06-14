#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TimeType.h>

namespace app::classes::System::TimeType {
    IL2CPP_REGISTER_METHOD(0x027AE320, void, ctor, app::TimeType* this_ptr, int32_t offset, bool is_dst, app::String* abbrev)
    IL2CPP_REGISTER_METHOD(0x027AE330, app::String*, ToString, app::TimeType* this_ptr)
} // namespace app::classes::System::TimeType
