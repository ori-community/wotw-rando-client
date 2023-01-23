#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IgnoreImmediateChanges__Boxed.h>
#include <Modloader/app/structs/Object_1.h>

namespace app::classes::IgnoreImmediateChanges {
    IL2CPP_REGISTER_METHOD(0x00002890, void, ctor, (app::IgnoreImmediateChanges__Boxed * this_ptr, app::Object_1* obj))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::IgnoreImmediateChanges__Boxed * this_ptr))
} // namespace app::classes::IgnoreImmediateChanges
