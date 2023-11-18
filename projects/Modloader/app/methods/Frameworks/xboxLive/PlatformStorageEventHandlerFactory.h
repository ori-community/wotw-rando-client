#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IPlatformStorageEventHandler.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::frameworks::xboxLive::PlatformStorageEventHandlerFactory {
    IL2CPP_REGISTER_METHOD(0x00F6B3F0, app::IPlatformStorageEventHandler*, Get, (app::String * source_key))
}
