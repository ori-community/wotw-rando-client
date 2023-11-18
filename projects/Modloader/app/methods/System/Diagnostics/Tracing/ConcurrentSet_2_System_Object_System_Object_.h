#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ConcurrentSet_2_System_Object_System_Object___Boxed.h>

namespace app::classes::System::Diagnostics::Tracing::ConcurrentSet_2_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00222ED0, app::Object*, TryGet, (app::ConcurrentSet_2_System_Object_System_Object___Boxed * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x00222EC0, app::Object*, GetOrAdd, (app::ConcurrentSet_2_System_Object_System_Object___Boxed * this_ptr, app::Object* new_item))
} // namespace app::classes::System::Diagnostics::Tracing::ConcurrentSet_2_System_Object_System_Object_
