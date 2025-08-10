#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCompletedEventArgs.h>
#include <Modloader/app/structs/AsyncCompletedEventHandler.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/DownloadDataCompletedEventArgs.h>
#include <Modloader/app/structs/DownloadDataCompletedEventHandler.h>
#include <Modloader/app/structs/DownloadStringCompletedEventArgs.h>
#include <Modloader/app/structs/DownloadStringCompletedEventHandler.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/OpenReadCompletedEventArgs.h>
#include <Modloader/app/structs/OpenReadCompletedEventHandler.h>
#include <Modloader/app/structs/OpenWriteCompletedEventArgs.h>
#include <Modloader/app/structs/OpenWriteCompletedEventHandler.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UploadDataCompletedEventArgs.h>
#include <Modloader/app/structs/UploadDataCompletedEventHandler.h>
#include <Modloader/app/structs/UploadFileCompletedEventArgs.h>
#include <Modloader/app/structs/UploadFileCompletedEventHandler.h>
#include <Modloader/app/structs/UploadStringCompletedEventArgs.h>
#include <Modloader/app/structs/UploadStringCompletedEventHandler.h>
#include <Modloader/app/structs/UploadValuesCompletedEventArgs.h>
#include <Modloader/app/structs/UploadValuesCompletedEventHandler.h>
#include <Modloader/app/structs/WebClient.h>
#include <Modloader/app/structs/WebClient_c.h>

namespace app::classes::System::Net::WebClient___c {
    IL2CPP_REGISTER_METHOD(0x01D5DF80, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::WebClient_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D5E0C0, app::String*, _DownloadStringTaskAsync_b__219_1, app::WebClient_c* this_ptr, app::DownloadStringCompletedEventArgs* args)
    IL2CPP_REGISTER_METHOD(
        0x01D5E0F0,
        void,
        _DownloadStringTaskAsync_b__219_2,
        app::WebClient_c* this_ptr,
        app::WebClient* web_client,
        app::DownloadStringCompletedEventHandler* completion
    )
    IL2CPP_REGISTER_METHOD(0x01D5E0C0, app::Stream*, _OpenReadTaskAsync_b__221_1, app::WebClient_c* this_ptr, app::OpenReadCompletedEventArgs* args)
    IL2CPP_REGISTER_METHOD(
        0x01D5E120,
        void,
        _OpenReadTaskAsync_b__221_2,
        app::WebClient_c* this_ptr,
        app::WebClient* web_client,
        app::OpenReadCompletedEventHandler* completion
    )
    IL2CPP_REGISTER_METHOD(0x01D5E0C0, app::Stream*, _OpenWriteTaskAsync_b__225_1, app::WebClient_c* this_ptr, app::OpenWriteCompletedEventArgs* args)
    IL2CPP_REGISTER_METHOD(
        0x01D5E150,
        void,
        _OpenWriteTaskAsync_b__225_2,
        app::WebClient_c* this_ptr,
        app::WebClient* web_client,
        app::OpenWriteCompletedEventHandler* completion
    )
    IL2CPP_REGISTER_METHOD(0x01D5E0C0, app::String*, _UploadStringTaskAsync_b__229_1, app::WebClient_c* this_ptr, app::UploadStringCompletedEventArgs* args)
    IL2CPP_REGISTER_METHOD(
        0x01D5E180,
        void,
        _UploadStringTaskAsync_b__229_2,
        app::WebClient_c* this_ptr,
        app::WebClient* web_client,
        app::UploadStringCompletedEventHandler* completion
    )
    IL2CPP_REGISTER_METHOD(
        0x01D5E0C0,
        app::Byte__Array*,
        _DownloadDataTaskAsync_b__231_1,
        app::WebClient_c* this_ptr,
        app::DownloadDataCompletedEventArgs* args
    )
    IL2CPP_REGISTER_METHOD(
        0x01D5E1B0,
        void,
        _DownloadDataTaskAsync_b__231_2,
        app::WebClient_c* this_ptr,
        app::WebClient* web_client,
        app::DownloadDataCompletedEventHandler* completion
    )
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Object*, _DownloadFileTaskAsync_b__233_1, app::WebClient_c* this_ptr, app::AsyncCompletedEventArgs* args)
    IL2CPP_REGISTER_METHOD(
        0x01D5E1E0,
        void,
        _DownloadFileTaskAsync_b__233_2,
        app::WebClient_c* this_ptr,
        app::WebClient* web_client,
        app::AsyncCompletedEventHandler* completion
    )
    IL2CPP_REGISTER_METHOD(0x01D5E0C0, app::Byte__Array*, _UploadDataTaskAsync_b__237_1, app::WebClient_c* this_ptr, app::UploadDataCompletedEventArgs* args)
    IL2CPP_REGISTER_METHOD(
        0x01D5E210,
        void,
        _UploadDataTaskAsync_b__237_2,
        app::WebClient_c* this_ptr,
        app::WebClient* web_client,
        app::UploadDataCompletedEventHandler* completion
    )
    IL2CPP_REGISTER_METHOD(0x01D5E0C0, app::Byte__Array*, _UploadFileTaskAsync_b__241_1, app::WebClient_c* this_ptr, app::UploadFileCompletedEventArgs* args)
    IL2CPP_REGISTER_METHOD(
        0x01D5E240,
        void,
        _UploadFileTaskAsync_b__241_2,
        app::WebClient_c* this_ptr,
        app::WebClient* web_client,
        app::UploadFileCompletedEventHandler* completion
    )
    IL2CPP_REGISTER_METHOD(
        0x01D5E0C0,
        app::Byte__Array*,
        _UploadValuesTaskAsync_b__245_1,
        app::WebClient_c* this_ptr,
        app::UploadValuesCompletedEventArgs* args
    )
    IL2CPP_REGISTER_METHOD(
        0x01D5E270,
        void,
        _UploadValuesTaskAsync_b__245_2,
        app::WebClient_c* this_ptr,
        app::WebClient* web_client,
        app::UploadValuesCompletedEventHandler* completion
    )
} // namespace app::classes::System::Net::WebClient___c
