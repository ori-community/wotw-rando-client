#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WebClient_DownloadBitsState.h>
#include <Modloader/app/structs/AsyncOperation.h>
#include <Modloader/app/structs/CompletionDelegate.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/WebClient.h>
#include <Modloader/app/structs/WebClient_ProgressData.h>
#include <Modloader/app/structs/WebRequest.h>
#include <Modloader/app/structs/WebResponse.h>

namespace app::classes::System::Net::WebClient_DownloadBitsState {
    IL2CPP_REGISTER_METHOD(0x01D60120, void, ctor, (app::WebClient_DownloadBitsState * this_ptr, app::WebRequest* request, app::Stream* write_stream, app::CompletionDelegate* completion_delegate, app::AsyncOperation* async_op, app::WebClient_ProgressData* progress, app::WebClient* web_client))
    IL2CPP_REGISTER_METHOD(0x01D60150, bool, get_Async, (app::WebClient_DownloadBitsState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D60160, int32_t, SetResponse, (app::WebClient_DownloadBitsState * this_ptr, app::WebResponse* response))
    IL2CPP_REGISTER_METHOD(0x01D605F0, bool, RetrieveBytes, (app::WebClient_DownloadBitsState * this_ptr, int32_t* bytes_retrieved))
    IL2CPP_REGISTER_METHOD(0x01D60AD0, void, Close, (app::WebClient_DownloadBitsState * this_ptr))
} // namespace app::classes::System::Net::WebClient_DownloadBitsState
