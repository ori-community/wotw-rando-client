#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConcurrentDictionary_2_System_String_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Concurrent::ConcurrentDictionary_2_System_String_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02AEEB60, bool, TryGetValue, (app::ConcurrentDictionary_2_System_String_System_Object_ * this_ptr, app::String* key, app::Object** value))
    IL2CPP_REGISTER_METHOD(0x02AF0430, void, set_Item, (app::ConcurrentDictionary_2_System_String_System_Object_ * this_ptr, app::String* key, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02ADDC30, void, ctor, (app::ConcurrentDictionary_2_System_String_System_Object_ * this_ptr))
} // namespace app::classes::System::Collections::Concurrent::ConcurrentDictionary_2_System_String_System_Object_
