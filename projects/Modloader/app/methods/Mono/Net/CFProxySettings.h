#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CFDictionary.h>
#include <Modloader/app/structs/CFProxySettings.h>

namespace app::classes::Mono::Net::CFProxySettings {
    IL2CPP_REGISTER_METHOD(0x02179830, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::CFProxySettings* this_ptr, app::CFDictionary* settings)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::CFDictionary*, get_Dictionary, app::CFProxySettings* this_ptr)
} // namespace app::classes::Mono::Net::CFProxySettings
