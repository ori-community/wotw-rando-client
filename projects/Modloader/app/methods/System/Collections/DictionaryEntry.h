#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DictionaryEntry__Boxed.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::DictionaryEntry {
    IL2CPP_REGISTER_METHOD(0x00110270, void, ctor, (app::DictionaryEntry__Boxed * this_ptr, app::Object* key, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x00107C00, app::Object*, get_Key, (app::DictionaryEntry__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00107C10, app::Object*, get_Value, (app::DictionaryEntry__Boxed * this_ptr))
} // namespace app::classes::System::Collections::DictionaryEntry
