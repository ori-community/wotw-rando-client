#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CaseSensitiveStringDictionary.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Specialized::CaseSensitiveStringDictionary {
    IL2CPP_REGISTER_METHOD(0x024928E0, void, ctor, (app::CaseSensitiveStringDictionary * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024928F0, app::String*, get_Item, (app::CaseSensitiveStringDictionary * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHOD(0x024929F0, void, set_Item, (app::CaseSensitiveStringDictionary * this_ptr, app::String* key, app::String* value))
    IL2CPP_REGISTER_METHOD(0x02492AE0, void, Add, (app::CaseSensitiveStringDictionary * this_ptr, app::String* key, app::String* value))
    IL2CPP_REGISTER_METHOD(0x02492BD0, void, Remove, (app::CaseSensitiveStringDictionary * this_ptr, app::String* key))
} // namespace app::classes::System::Collections::Specialized::CaseSensitiveStringDictionary
