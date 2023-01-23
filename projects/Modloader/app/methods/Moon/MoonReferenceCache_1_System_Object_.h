#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/MoonReferenceCache_1_System_Object_.h>
#include <Modloader/app/structs/MoonReference_1_System_Object_.h>

namespace app::classes::Moon::MoonReferenceCache_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x027204F0, app::Object*, GetValue, (app::MoonReferenceCache_1_System_Object_ * this_ptr, app::MoonReference_1_System_Object_* moon_ref))
    IL2CPP_REGISTER_METHOD(0x02720590, void, ctor, (app::MoonReferenceCache_1_System_Object_ * this_ptr, bool always_resolve_on_editor))
} // namespace app::classes::Moon::MoonReferenceCache_1_System_Object_
