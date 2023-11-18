#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Wrapper_c.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XGameSaveBlobInfo_1.h>
#include <Modloader/app/structs/XGameSaveBlob__Array.h>
#include <Modloader/app/structs/XGameSaveProviderHandle.h>

namespace app::classes::Grdk::Wrapper___c {
    IL2CPP_REGISTER_METHOD(0x01089C70, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Wrapper_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C53630, app::String*, _DownloadAllSaves_b__46_0, (app::Wrapper_c * this_ptr, app::XGameSaveBlobInfo_1* b))
    IL2CPP_REGISTER_METHOD(0x01089DB0, void, _DownloadAllSaves_b__46_1, (app::Wrapper_c * this_ptr, int32_t hresult, app::XGameSaveBlob__Array* save_blobs))
    IL2CPP_REGISTER_METHOD(0x0108A070, void, _CleanupXBL_b__52_0, (app::Wrapper_c * this_ptr, int32_t _))
    IL2CPP_REGISTER_METHOD(0x0108A1B0, void, _InitializeRuntime_b__68_0, (app::Wrapper_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0108A2F0, void, _InitializeSaveSync_b__71_0, (app::Wrapper_c * this_ptr, int32_t hresult, app::XGameSaveProviderHandle* handle))
    IL2CPP_REGISTER_METHOD(0x0108A490, void, _ResolveUserIssueUI_b__75_0, (app::Wrapper_c * this_ptr, int32_t hresult))
} // namespace app::classes::Grdk::Wrapper___c
