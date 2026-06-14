#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DirectProxy.h>
#include <Modloader/app/structs/Uri.h>

namespace app::classes::System::Net::DirectProxy {
    IL2CPP_REGISTER_METHOD(0x01EB0B10, void, ctor, app::DirectProxy* this_ptr, app::Uri* destination)
    IL2CPP_REGISTER_METHOD(0x01EB0B20, bool, GetNextProxy, app::DirectProxy* this_ptr, app::Uri** proxy)
} // namespace app::classes::System::Net::DirectProxy
