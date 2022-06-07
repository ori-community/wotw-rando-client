#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Microsoft::Xbox::Services::Xal::XalService_ManagedStorageHandlers {
    IL2CPP_REGISTER_METHOD(0x00522850, void, ctor, (app::XalService_ManagedStorageHandlers * this_ptr, app::PlatformStorageWriteEventHandler * write_handler, app::PlatformStorageReadEventHandler * read_handler, app::PlatformStorageClearEventHandler * clear_handler))
}
