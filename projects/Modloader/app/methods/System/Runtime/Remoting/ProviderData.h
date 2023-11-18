#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ProviderData.h>

namespace app::classes::System::Runtime::Remoting::ProviderData {
    IL2CPP_REGISTER_METHOD(0x0231CA50, void, CopyFrom, (app::ProviderData * this_ptr, app::ProviderData* other))
    IL2CPP_REGISTER_METHOD(0x0231D110, void, ctor, (app::ProviderData * this_ptr))
} // namespace app::classes::System::Runtime::Remoting::ProviderData
