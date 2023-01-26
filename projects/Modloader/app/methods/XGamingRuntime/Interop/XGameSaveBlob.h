#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XGameSaveBlob_1__Boxed.h>
#include <Modloader/app/structs/Byte__Array.h>

namespace app::classes::XGamingRuntime::Interop::XGameSaveBlob {
    IL2CPP_REGISTER_METHOD(0x00244860, void, CopyData, (app::XGameSaveBlob_1__Boxed * this_ptr, app::Byte__Array* buffer))
}
