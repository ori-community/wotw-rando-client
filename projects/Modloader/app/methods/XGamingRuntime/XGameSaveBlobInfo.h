#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XGameSaveBlobInfo.h>
#include <Modloader/app/structs/XGameSaveBlobInfo_1.h>

namespace app::classes::XGamingRuntime::XGameSaveBlobInfo {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Name, app::XGameSaveBlobInfo_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030BADD0, void, ctor, app::XGameSaveBlobInfo_1* this_ptr, app::XGameSaveBlobInfo interop_handle)
} // namespace app::classes::XGamingRuntime::XGameSaveBlobInfo
