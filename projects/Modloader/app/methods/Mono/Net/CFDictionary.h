#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Mono::Net::CFDictionary {
    IL2CPP_REGISTER_METHOD(0x02173B60, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x02173690, void, ctor, (app::CFDictionary * this_ptr, void* handle, bool own))
    IL2CPP_REGISTER_METHOD(0x02173CA0, void*, CFDictionaryGetValue, (void* handle, void* key))
    IL2CPP_REGISTER_METHOD(0x02173D50, void*, GetValue, (app::CFDictionary * this_ptr, void* key))
    IL2CPP_REGISTER_METHOD(0x02173D50, void*, get_Item, (app::CFDictionary * this_ptr, void* key))
} // namespace app::classes::Mono::Net::CFDictionary
