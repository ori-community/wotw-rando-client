#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WebClient_UploadBitsState.h>
#include <Modloader/app/structs/AsyncOperation.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CompletionDelegate.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/WebClient.h>
#include <Modloader/app/structs/WebClient_ProgressData.h>
#include <Modloader/app/structs/WebRequest.h>

namespace app::classes::System::Net::WebClient_UploadBitsState {
    IL2CPP_REGISTER_METHOD(0x01D60B60, void, ctor, (app::WebClient_UploadBitsState * this_ptr, app::WebRequest* request, app::Stream* read_stream, app::Byte__Array* buffer, int32_t chunk_size, app::Byte__Array* header, app::Byte__Array* footer, app::CompletionDelegate* upload_completion_delegate, app::CompletionDelegate* download_completion_delegate, app::AsyncOperation* async_op, app::WebClient_ProgressData* progress, app::WebClient* web_client))
    IL2CPP_REGISTER_METHOD(0x01D60C50, bool, get_FileUpload, (app::WebClient_UploadBitsState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00938890, bool, get_Async, (app::WebClient_UploadBitsState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D60C60, void, SetRequestStream, (app::WebClient_UploadBitsState * this_ptr, app::Stream* write_stream))
    IL2CPP_REGISTER_METHOD(0x01D60EA0, bool, WriteBytes, (app::WebClient_UploadBitsState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D61190, void, Close, (app::WebClient_UploadBitsState * this_ptr))
} // namespace app::classes::System::Net::WebClient_UploadBitsState
