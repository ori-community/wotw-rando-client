#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlatformStorageClearEventHandler.h>
#include <Modloader/app/structs/PlatformStorageReadEventHandler.h>
#include <Modloader/app/structs/PlatformStorageWriteEventHandler.h>
#include <Modloader/app/structs/XalService_ManagedStorageHandlers.h>

namespace app::classes::Microsoft::Xbox::Services::Xal::XalService_ManagedStorageHandlers {
    IL2CPP_REGISTER_METHOD(
        0x00522850,
        void,
        ctor,
        app::XalService_ManagedStorageHandlers* this_ptr,
        app::PlatformStorageWriteEventHandler* write_handler,
        app::PlatformStorageReadEventHandler* read_handler,
        app::PlatformStorageClearEventHandler* clear_handler
    )
}
