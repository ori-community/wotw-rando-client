#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NameValueCollection.h>
#include <Modloader/app/structs/ProviderBase.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Configuration::Provider::ProviderBase {
    IL2CPP_REGISTER_METHOD(0x031BBFF0, void, Initialize, app::ProviderBase* this_ptr, app::String* name, app::NameValueCollection* config)
}
