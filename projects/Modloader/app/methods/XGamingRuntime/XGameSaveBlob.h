#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XGameSaveBlob.h>
#include <Modloader/app/structs/XGameSaveBlob_1.h>

namespace app::classes::XGamingRuntime::XGameSaveBlob {
    IL2CPP_REGISTER_METHOD(0x030BAC30, void, ctor, app::XGameSaveBlob* this_ptr, app::XGameSaveBlob_1 interop_blob)
}
