#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StringDictionary.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Specialized::StringDictionary {
    IL2CPP_REGISTER_METHOD(0x0249E610, void, ctor, (app::StringDictionary * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0249E770, app::String*, get_Item, (app::StringDictionary * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHOD(0x0249E8B0, void, set_Item, (app::StringDictionary * this_ptr, app::String* key, app::String* value))
    IL2CPP_REGISTER_METHOD(0x0249E9D0, void, Add, (app::StringDictionary * this_ptr, app::String* key, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01BCB4B0, void, Clear, (app::StringDictionary * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01717450, app::IEnumerator*, GetEnumerator, (app::StringDictionary * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0249EAF0, void, Remove, (app::StringDictionary * this_ptr, app::String* key))
} // namespace app::classes::System::Collections::Specialized::StringDictionary
