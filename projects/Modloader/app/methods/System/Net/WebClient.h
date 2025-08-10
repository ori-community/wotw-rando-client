#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_2_System_Net_WebClient_Object_.h>
#include <Modloader/app/structs/Action_2_System_Net_WebClient_System_ComponentModel_AsyncCompletedEventHandler_.h>
#include <Modloader/app/structs/Action_2_System_Net_WebClient_System_Net_DownloadDataCompletedEventHandler_.h>
#include <Modloader/app/structs/Action_2_System_Net_WebClient_System_Net_DownloadStringCompletedEventHandler_.h>
#include <Modloader/app/structs/Action_2_System_Net_WebClient_System_Net_OpenReadCompletedEventHandler_.h>
#include <Modloader/app/structs/Action_2_System_Net_WebClient_System_Net_OpenWriteCompletedEventHandler_.h>
#include <Modloader/app/structs/Action_2_System_Net_WebClient_System_Net_UploadDataCompletedEventHandler_.h>
#include <Modloader/app/structs/Action_2_System_Net_WebClient_System_Net_UploadFileCompletedEventHandler_.h>
#include <Modloader/app/structs/Action_2_System_Net_WebClient_System_Net_UploadStringCompletedEventHandler_.h>
#include <Modloader/app/structs/Action_2_System_Net_WebClient_System_Net_UploadValuesCompletedEventHandler_.h>
#include <Modloader/app/structs/AsyncCompletedEventArgs.h>
#include <Modloader/app/structs/AsyncCompletedEventHandler.h>
#include <Modloader/app/structs/AsyncOperation.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CompletionDelegate.h>
#include <Modloader/app/structs/DownloadDataCompletedEventArgs.h>
#include <Modloader/app/structs/DownloadDataCompletedEventHandler.h>
#include <Modloader/app/structs/DownloadProgressChangedEventArgs.h>
#include <Modloader/app/structs/DownloadProgressChangedEventHandler.h>
#include <Modloader/app/structs/DownloadStringCompletedEventArgs.h>
#include <Modloader/app/structs/DownloadStringCompletedEventHandler.h>
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/FileStream.h>
#include <Modloader/app/structs/Func_2_Object_Object_.h>
#include <Modloader/app/structs/Func_2_System_ComponentModel_AsyncCompletedEventArgs_Object_.h>
#include <Modloader/app/structs/Func_2_System_Net_DownloadDataCompletedEventArgs_Byte_.h>
#include <Modloader/app/structs/Func_2_System_Net_DownloadStringCompletedEventArgs_String_.h>
#include <Modloader/app/structs/Func_2_System_Net_OpenReadCompletedEventArgs_System_IO_Stream_.h>
#include <Modloader/app/structs/Func_2_System_Net_OpenWriteCompletedEventArgs_System_IO_Stream_.h>
#include <Modloader/app/structs/Func_2_System_Net_UploadDataCompletedEventArgs_Byte_.h>
#include <Modloader/app/structs/Func_2_System_Net_UploadFileCompletedEventArgs_Byte_.h>
#include <Modloader/app/structs/Func_2_System_Net_UploadStringCompletedEventArgs_String_.h>
#include <Modloader/app/structs/Func_2_System_Net_UploadValuesCompletedEventArgs_Byte_.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/ICredentials.h>
#include <Modloader/app/structs/IWebProxy.h>
#include <Modloader/app/structs/NameValueCollection.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/OpenReadCompletedEventArgs.h>
#include <Modloader/app/structs/OpenReadCompletedEventHandler.h>
#include <Modloader/app/structs/OpenWriteCompletedEventArgs.h>
#include <Modloader/app/structs/OpenWriteCompletedEventHandler.h>
#include <Modloader/app/structs/RequestCachePolicy.h>
#include <Modloader/app/structs/SendOrPostCallback.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/TaskCompletionSource_1_System_Byte_.h>
#include <Modloader/app/structs/TaskCompletionSource_1_System_IO_Stream_.h>
#include <Modloader/app/structs/TaskCompletionSource_1_System_Object_.h>
#include <Modloader/app/structs/TaskCompletionSource_1_System_String_.h>
#include <Modloader/app/structs/Task_1_System_Byte_.h>
#include <Modloader/app/structs/Task_1_System_IO_Stream_.h>
#include <Modloader/app/structs/Task_1_System_String_.h>
#include <Modloader/app/structs/UploadDataCompletedEventArgs.h>
#include <Modloader/app/structs/UploadDataCompletedEventHandler.h>
#include <Modloader/app/structs/UploadFileCompletedEventArgs.h>
#include <Modloader/app/structs/UploadFileCompletedEventHandler.h>
#include <Modloader/app/structs/UploadProgressChangedEventArgs.h>
#include <Modloader/app/structs/UploadProgressChangedEventHandler.h>
#include <Modloader/app/structs/UploadStringCompletedEventArgs.h>
#include <Modloader/app/structs/UploadStringCompletedEventHandler.h>
#include <Modloader/app/structs/UploadValuesCompletedEventArgs.h>
#include <Modloader/app/structs/UploadValuesCompletedEventHandler.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/WebClient.h>
#include <Modloader/app/structs/WebClient_DownloadBitsState.h>
#include <Modloader/app/structs/WebClient_ProgressData.h>
#include <Modloader/app/structs/WebClient_UploadBitsState.h>
#include <Modloader/app/structs/WebHeaderCollection.h>
#include <Modloader/app/structs/WebRequest.h>
#include <Modloader/app/structs/WebResponse.h>
#include <Modloader/app/structs/WriteStreamClosedEventArgs.h>
#include <Modloader/app/structs/WriteStreamClosedEventHandler.h>

namespace app::classes::System::Net::WebClient {
    IL2CPP_REGISTER_METHOD(0x020AD8D0, void, ctor, app::WebClient* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020AD9F0, void, InitWebClientAsync, app::WebClient* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020AE460, void, ClearWebClientState, app::WebClient* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020AE580, void, CompleteWebClientState, app::WebClient* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0061E2F0, bool, get_AllowReadStreamBuffering, app::WebClient* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0061E2E0, void, set_AllowReadStreamBuffering, app::WebClient* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00CA2550, bool, get_AllowWriteStreamBuffering, app::WebClient* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CA2560, void, set_AllowWriteStreamBuffering, app::WebClient* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, add_WriteStreamClosed, app::WebClient* this_ptr, app::WriteStreamClosedEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, remove_WriteStreamClosed, app::WebClient* this_ptr, app::WriteStreamClosedEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnWriteStreamClosed, app::WebClient* this_ptr, app::WriteStreamClosedEventArgs* e)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::Encoding*, get_Encoding, app::WebClient* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020AE590, void, set_Encoding, app::WebClient* this_ptr, app::Encoding* value)
    IL2CPP_REGISTER_METHOD(0x020AE650, app::String*, get_BaseAddress, app::WebClient* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020AE730, void, set_BaseAddress, app::WebClient* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::ICredentials*, get_Credentials, app::WebClient* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Credentials, app::WebClient* this_ptr, app::ICredentials* value)
    IL2CPP_REGISTER_METHOD(0x020AE910, bool, get_UseDefaultCredentials, app::WebClient* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020AE9E0, void, set_UseDefaultCredentials, app::WebClient* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x020AEA10, app::WebHeaderCollection*, get_Headers, app::WebClient* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_Headers, app::WebClient* this_ptr, app::WebHeaderCollection* value)
    IL2CPP_REGISTER_METHOD(0x020AEB70, app::NameValueCollection*, get_QueryString, app::WebClient* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_QueryString, app::WebClient* this_ptr, app::NameValueCollection* value)
    IL2CPP_REGISTER_METHOD(0x020AECD0, app::WebHeaderCollection*, get_ResponseHeaders, app::WebClient* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020AECF0, app::IWebProxy*, get_Proxy, app::WebClient* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020AEDA0, void, set_Proxy, app::WebClient* this_ptr, app::IWebProxy* value)
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::RequestCachePolicy*, get_CachePolicy, app::WebClient* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC50, void, set_CachePolicy, app::WebClient* this_ptr, app::RequestCachePolicy* value)
    IL2CPP_REGISTER_METHOD(0x020AEDB0, bool, get_IsBusy, app::WebClient* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020AEDC0, app::WebRequest*, GetWebRequest, app::WebClient* this_ptr, app::Uri* address)
    IL2CPP_REGISTER_METHOD(0x020AEF60, app::WebResponse*, GetWebResponse_1, app::WebClient* this_ptr, app::WebRequest* request)
    IL2CPP_REGISTER_METHOD(0x020AEFA0, app::WebResponse*, GetWebResponse_2, app::WebClient* this_ptr, app::WebRequest* request, app::IAsyncResult* result)
    IL2CPP_REGISTER_METHOD(0x020AEFE0, app::Byte__Array*, DownloadData_1, app::WebClient* this_ptr, app::String* address)
    IL2CPP_REGISTER_METHOD(0x020AF0B0, app::Byte__Array*, DownloadData_2, app::WebClient* this_ptr, app::Uri* address)
    IL2CPP_REGISTER_METHOD(0x020AF260, app::Byte__Array*, DownloadDataInternal, app::WebClient* this_ptr, app::Uri* address, app::WebRequest** request)
    IL2CPP_REGISTER_METHOD(0x020AF440, void, DownloadFile_1, app::WebClient* this_ptr, app::String* address, app::String* file_name)
    IL2CPP_REGISTER_METHOD(0x020AF520, void, DownloadFile_2, app::WebClient* this_ptr, app::Uri* address, app::String* file_name)
    IL2CPP_REGISTER_METHOD(0x020AF980, app::Stream*, OpenRead_1, app::WebClient* this_ptr, app::String* address)
    IL2CPP_REGISTER_METHOD(0x020AFA50, app::Stream*, OpenRead_2, app::WebClient* this_ptr, app::Uri* address)
    IL2CPP_REGISTER_METHOD(0x020AFD50, app::Stream*, OpenWrite_1, app::WebClient* this_ptr, app::String* address)
    IL2CPP_REGISTER_METHOD(0x020AFE30, app::Stream*, OpenWrite_2, app::WebClient* this_ptr, app::Uri* address)
    IL2CPP_REGISTER_METHOD(0x020AFE40, app::Stream*, OpenWrite_3, app::WebClient* this_ptr, app::String* address, app::String* method_1)
    IL2CPP_REGISTER_METHOD(0x020AFF20, app::Stream*, OpenWrite_4, app::WebClient* this_ptr, app::Uri* address, app::String* method_1)
    IL2CPP_REGISTER_METHOD(0x020B0300, app::Byte__Array*, UploadData_1, app::WebClient* this_ptr, app::String* address, app::Byte__Array* data)
    IL2CPP_REGISTER_METHOD(0x020B03F0, app::Byte__Array*, UploadData_2, app::WebClient* this_ptr, app::Uri* address, app::Byte__Array* data)
    IL2CPP_REGISTER_METHOD(
        0x020B0410,
        app::Byte__Array*,
        UploadData_3,
        app::WebClient* this_ptr,
        app::String* address,
        app::String* method_1,
        app::Byte__Array* data
    )
    IL2CPP_REGISTER_METHOD(
        0x020B0510,
        app::Byte__Array*,
        UploadData_4,
        app::WebClient* this_ptr,
        app::Uri* address,
        app::String* method_1,
        app::Byte__Array* data
    )
    IL2CPP_REGISTER_METHOD(
        0x020B0750,
        app::Byte__Array*,
        UploadDataInternal,
        app::WebClient* this_ptr,
        app::Uri* address,
        app::String* method_1,
        app::Byte__Array* data,
        app::WebRequest** request
    )
    IL2CPP_REGISTER_METHOD(
        0x020B0970,
        void,
        OpenFileInternal,
        app::WebClient* this_ptr,
        bool needs_header_and_boundary,
        app::String* file_name,
        app::FileStream** fs,
        app::Byte__Array** buffer,
        app::Byte__Array** form_header_bytes,
        app::Byte__Array** boundary_bytes
    )
    IL2CPP_REGISTER_METHOD(0x020B1330, app::Byte__Array*, UploadFile_1, app::WebClient* this_ptr, app::String* address, app::String* file_name)
    IL2CPP_REGISTER_METHOD(0x020B1420, app::Byte__Array*, UploadFile_2, app::WebClient* this_ptr, app::Uri* address, app::String* file_name)
    IL2CPP_REGISTER_METHOD(
        0x020B1440,
        app::Byte__Array*,
        UploadFile_3,
        app::WebClient* this_ptr,
        app::String* address,
        app::String* method_1,
        app::String* file_name
    )
    IL2CPP_REGISTER_METHOD(
        0x020B1490,
        app::Byte__Array*,
        UploadFile_4,
        app::WebClient* this_ptr,
        app::Uri* address,
        app::String* method_1,
        app::String* file_name
    )
    IL2CPP_REGISTER_METHOD(0x020B1900, app::Byte__Array*, UploadValuesInternal, app::WebClient* this_ptr, app::NameValueCollection* data)
    IL2CPP_REGISTER_METHOD(0x020B1E40, app::Byte__Array*, UploadValues_1, app::WebClient* this_ptr, app::String* address, app::NameValueCollection* data)
    IL2CPP_REGISTER_METHOD(0x020B1F30, app::Byte__Array*, UploadValues_2, app::WebClient* this_ptr, app::Uri* address, app::NameValueCollection* data)
    IL2CPP_REGISTER_METHOD(
        0x020B1F50,
        app::Byte__Array*,
        UploadValues_3,
        app::WebClient* this_ptr,
        app::String* address,
        app::String* method_1,
        app::NameValueCollection* data
    )
    IL2CPP_REGISTER_METHOD(
        0x020B2050,
        app::Byte__Array*,
        UploadValues_4,
        app::WebClient* this_ptr,
        app::Uri* address,
        app::String* method_1,
        app::NameValueCollection* data
    )
    IL2CPP_REGISTER_METHOD(0x020B23E0, app::String*, UploadString_1, app::WebClient* this_ptr, app::String* address, app::String* data)
    IL2CPP_REGISTER_METHOD(0x020B24D0, app::String*, UploadString_2, app::WebClient* this_ptr, app::Uri* address, app::String* data)
    IL2CPP_REGISTER_METHOD(0x020B24F0, app::String*, UploadString_3, app::WebClient* this_ptr, app::String* address, app::String* method_1, app::String* data)
    IL2CPP_REGISTER_METHOD(0x020B25F0, app::String*, UploadString_4, app::WebClient* this_ptr, app::Uri* address, app::String* method_1, app::String* data)
    IL2CPP_REGISTER_METHOD(0x020B2860, app::String*, DownloadString_1, app::WebClient* this_ptr, app::String* address)
    IL2CPP_REGISTER_METHOD(0x020B2930, app::String*, DownloadString_2, app::WebClient* this_ptr, app::Uri* address)
    IL2CPP_REGISTER_METHOD(0x020B2AF0, void, AbortRequest, app::WebRequest* request)
    IL2CPP_REGISTER_METHOD(0x020B2BF0, void, CopyHeadersTo, app::WebClient* this_ptr, app::WebRequest* request)
    IL2CPP_REGISTER_METHOD(0x020B33C0, app::Uri*, GetUri_1, app::WebClient* this_ptr, app::String* path)
    IL2CPP_REGISTER_METHOD(0x020B3760, app::Uri*, GetUri_2, app::WebClient* this_ptr, app::Uri* address)
    IL2CPP_REGISTER_METHOD(0x020B3E70, void, DownloadBitsResponseCallback, app::IAsyncResult* result)
    IL2CPP_REGISTER_METHOD(0x020B4250, void, DownloadBitsReadCallback, app::IAsyncResult* result)
    IL2CPP_REGISTER_METHOD(0x020B4350, void, DownloadBitsReadCallbackState, app::WebClient_DownloadBitsState* state, app::IAsyncResult* result)
    IL2CPP_REGISTER_METHOD(
        0x020B4730,
        app::Byte__Array*,
        DownloadBits,
        app::WebClient* this_ptr,
        app::WebRequest* request,
        app::Stream* write_stream,
        app::CompletionDelegate* completion_delegate,
        app::AsyncOperation* async_op
    )
    IL2CPP_REGISTER_METHOD(0x020B4A40, void, UploadBitsRequestCallback, app::IAsyncResult* result)
    IL2CPP_REGISTER_METHOD(0x020B4E00, void, UploadBitsWriteCallback, app::IAsyncResult* result)
    IL2CPP_REGISTER_METHOD(
        0x020B5210,
        void,
        UploadBits,
        app::WebClient* this_ptr,
        app::WebRequest* request,
        app::Stream* read_stream,
        app::Byte__Array* buffer,
        int32_t chunk_size,
        app::Byte__Array* header,
        app::Byte__Array* footer,
        app::CompletionDelegate* upload_completion_delegate,
        app::CompletionDelegate* download_completion_delegate,
        app::AsyncOperation* async_op
    )
    IL2CPP_REGISTER_METHOD(0x020B5650, bool, ByteArrayHasPrefix, app::WebClient* this_ptr, app::Byte__Array* prefix, app::Byte__Array* byte_array)
    IL2CPP_REGISTER_METHOD(0x020B56D0, app::String*, GetStringUsingEncoding, app::WebClient* this_ptr, app::WebRequest* request, app::Byte__Array* data)
    IL2CPP_REGISTER_METHOD(0x020B5BF0, app::String*, MapToDefaultMethod, app::WebClient* this_ptr, app::Uri* address)
    IL2CPP_REGISTER_METHOD(0x020B5E40, app::String*, UrlEncode_1, app::String* str)
    IL2CPP_REGISTER_METHOD(0x020B5EF0, app::String*, UrlEncode_2, app::String* str, app::Encoding* e)
    IL2CPP_REGISTER_METHOD(0x020B5FA0, app::Byte__Array*, UrlEncodeToBytes, app::String* str, app::Encoding* e)
    IL2CPP_REGISTER_METHOD(
        0x020B6000,
        app::Byte__Array*,
        UrlEncodeBytesToBytesInternal,
        app::Byte__Array* bytes,
        int32_t offset,
        int32_t count,
        bool always_create_return_value
    )
    IL2CPP_REGISTER_METHOD(0x020B6310, char16_t, IntToHex, int32_t n)
    IL2CPP_REGISTER_METHOD(0x020B6320, bool, IsSafe, char16_t ch)
    IL2CPP_REGISTER_METHOD(
        0x020B63A0,
        void,
        InvokeOperationCompleted,
        app::WebClient* this_ptr,
        app::AsyncOperation* async_op,
        app::SendOrPostCallback* callback,
        app::AsyncCompletedEventArgs* event_args
    )
    IL2CPP_REGISTER_METHOD(0x020B6400, bool, AnotherCallInProgress, app::WebClient* this_ptr, int32_t call_nesting)
    IL2CPP_REGISTER_METHOD(0x020B6410, void, add_OpenReadCompleted, app::WebClient* this_ptr, app::OpenReadCompletedEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x020B6500, void, remove_OpenReadCompleted, app::WebClient* this_ptr, app::OpenReadCompletedEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x017F0830, void, OnOpenReadCompleted, app::WebClient* this_ptr, app::OpenReadCompletedEventArgs* e)
    IL2CPP_REGISTER_METHOD(0x020B65F0, void, OpenReadOperationCompleted, app::WebClient* this_ptr, app::Object* arg)
    IL2CPP_REGISTER_METHOD(0x020B66E0, void, OpenReadAsyncCallback, app::WebClient* this_ptr, app::IAsyncResult* result)
    IL2CPP_REGISTER_METHOD(0x020B6C90, void, OpenReadAsync_1, app::WebClient* this_ptr, app::Uri* address)
    IL2CPP_REGISTER_METHOD(0x020B6CA0, void, OpenReadAsync_2, app::WebClient* this_ptr, app::Uri* address, app::Object* user_token)
    IL2CPP_REGISTER_METHOD(0x020B71D0, void, add_OpenWriteCompleted, app::WebClient* this_ptr, app::OpenWriteCompletedEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x020B72C0, void, remove_OpenWriteCompleted, app::WebClient* this_ptr, app::OpenWriteCompletedEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x020B73B0, void, OnOpenWriteCompleted, app::WebClient* this_ptr, app::OpenWriteCompletedEventArgs* e)
    IL2CPP_REGISTER_METHOD(0x020B73D0, void, OpenWriteOperationCompleted, app::WebClient* this_ptr, app::Object* arg)
    IL2CPP_REGISTER_METHOD(0x020B74C0, void, OpenWriteAsyncCallback, app::WebClient* this_ptr, app::IAsyncResult* result)
    IL2CPP_REGISTER_METHOD(0x020B79D0, void, OpenWriteAsync_1, app::WebClient* this_ptr, app::Uri* address)
    IL2CPP_REGISTER_METHOD(0x020B79F0, void, OpenWriteAsync_2, app::WebClient* this_ptr, app::Uri* address, app::String* method_1)
    IL2CPP_REGISTER_METHOD(0x020B7A10, void, OpenWriteAsync_3, app::WebClient* this_ptr, app::Uri* address, app::String* method_1, app::Object* user_token)
    IL2CPP_REGISTER_METHOD(0x020B7F60, void, add_DownloadStringCompleted, app::WebClient* this_ptr, app::DownloadStringCompletedEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x020B8050, void, remove_DownloadStringCompleted, app::WebClient* this_ptr, app::DownloadStringCompletedEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x020B8140, void, OnDownloadStringCompleted, app::WebClient* this_ptr, app::DownloadStringCompletedEventArgs* e)
    IL2CPP_REGISTER_METHOD(0x020B8160, void, DownloadStringOperationCompleted, app::WebClient* this_ptr, app::Object* arg)
    IL2CPP_REGISTER_METHOD(
        0x020B8250,
        void,
        DownloadStringAsyncCallback,
        app::WebClient* this_ptr,
        app::Byte__Array* return_bytes,
        app::Exception* exception,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(0x020B8500, void, DownloadStringAsync_1, app::WebClient* this_ptr, app::Uri* address)
    IL2CPP_REGISTER_METHOD(0x020B8510, void, DownloadStringAsync_2, app::WebClient* this_ptr, app::Uri* address, app::Object* user_token)
    IL2CPP_REGISTER_METHOD(0x020B8930, void, add_DownloadDataCompleted, app::WebClient* this_ptr, app::DownloadDataCompletedEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x020B8A20, void, remove_DownloadDataCompleted, app::WebClient* this_ptr, app::DownloadDataCompletedEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x020B8B10, void, OnDownloadDataCompleted, app::WebClient* this_ptr, app::DownloadDataCompletedEventArgs* e)
    IL2CPP_REGISTER_METHOD(0x020B8B30, void, DownloadDataOperationCompleted, app::WebClient* this_ptr, app::Object* arg)
    IL2CPP_REGISTER_METHOD(
        0x020B8C20,
        void,
        DownloadDataAsyncCallback,
        app::WebClient* this_ptr,
        app::Byte__Array* return_bytes,
        app::Exception* exception,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(0x020B8E20, void, DownloadDataAsync_1, app::WebClient* this_ptr, app::Uri* address)
    IL2CPP_REGISTER_METHOD(0x020B8E30, void, DownloadDataAsync_2, app::WebClient* this_ptr, app::Uri* address, app::Object* user_token)
    IL2CPP_REGISTER_METHOD(0x020B9250, void, add_DownloadFileCompleted, app::WebClient* this_ptr, app::AsyncCompletedEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x020B9340, void, remove_DownloadFileCompleted, app::WebClient* this_ptr, app::AsyncCompletedEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x020B9430, void, OnDownloadFileCompleted, app::WebClient* this_ptr, app::AsyncCompletedEventArgs* e)
    IL2CPP_REGISTER_METHOD(0x020B9450, void, DownloadFileOperationCompleted, app::WebClient* this_ptr, app::Object* arg)
    IL2CPP_REGISTER_METHOD(
        0x020B9540,
        void,
        DownloadFileAsyncCallback,
        app::WebClient* this_ptr,
        app::Byte__Array* return_bytes,
        app::Exception* exception,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(0x020B9730, void, DownloadFileAsync_1, app::WebClient* this_ptr, app::Uri* address, app::String* file_name)
    IL2CPP_REGISTER_METHOD(0x020B9750, void, DownloadFileAsync_2, app::WebClient* this_ptr, app::Uri* address, app::String* file_name, app::Object* user_token)
    IL2CPP_REGISTER_METHOD(0x020B9CD0, void, add_UploadStringCompleted, app::WebClient* this_ptr, app::UploadStringCompletedEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x020B9DC0, void, remove_UploadStringCompleted, app::WebClient* this_ptr, app::UploadStringCompletedEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x020B9EB0, void, OnUploadStringCompleted, app::WebClient* this_ptr, app::UploadStringCompletedEventArgs* e)
    IL2CPP_REGISTER_METHOD(0x020B9ED0, void, UploadStringOperationCompleted, app::WebClient* this_ptr, app::Object* arg)
    IL2CPP_REGISTER_METHOD(0x020B9FC0, void, StartDownloadAsync, app::WebClient* this_ptr, app::WebClient_UploadBitsState* state)
    IL2CPP_REGISTER_METHOD(
        0x020BA250,
        void,
        UploadStringAsyncWriteCallback,
        app::WebClient* this_ptr,
        app::Byte__Array* return_bytes,
        app::Exception* exception,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(
        0x020BA4B0,
        void,
        UploadStringAsyncReadCallback,
        app::WebClient* this_ptr,
        app::Byte__Array* return_bytes,
        app::Exception* exception,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(0x020BA760, void, UploadStringAsync_1, app::WebClient* this_ptr, app::Uri* address, app::String* data)
    IL2CPP_REGISTER_METHOD(0x020BA780, void, UploadStringAsync_2, app::WebClient* this_ptr, app::Uri* address, app::String* method_1, app::String* data)
    IL2CPP_REGISTER_METHOD(
        0x020BA7A0,
        void,
        UploadStringAsync_3,
        app::WebClient* this_ptr,
        app::Uri* address,
        app::String* method_1,
        app::String* data,
        app::Object* user_token
    )
    IL2CPP_REGISTER_METHOD(0x020BAE50, void, add_UploadDataCompleted, app::WebClient* this_ptr, app::UploadDataCompletedEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x020BAF40, void, remove_UploadDataCompleted, app::WebClient* this_ptr, app::UploadDataCompletedEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x020BB030, void, OnUploadDataCompleted, app::WebClient* this_ptr, app::UploadDataCompletedEventArgs* e)
    IL2CPP_REGISTER_METHOD(0x020BB050, void, UploadDataOperationCompleted, app::WebClient* this_ptr, app::Object* arg)
    IL2CPP_REGISTER_METHOD(
        0x020BB140,
        void,
        UploadDataAsyncWriteCallback,
        app::WebClient* this_ptr,
        app::Byte__Array* return_bytes,
        app::Exception* exception,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(
        0x020BB3B0,
        void,
        UploadDataAsyncReadCallback,
        app::WebClient* this_ptr,
        app::Byte__Array* return_bytes,
        app::Exception* exception,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(0x020BB5B0, void, UploadDataAsync_1, app::WebClient* this_ptr, app::Uri* address, app::Byte__Array* data)
    IL2CPP_REGISTER_METHOD(0x020BB5D0, void, UploadDataAsync_2, app::WebClient* this_ptr, app::Uri* address, app::String* method_1, app::Byte__Array* data)
    IL2CPP_REGISTER_METHOD(
        0x020BB5F0,
        void,
        UploadDataAsync_3,
        app::WebClient* this_ptr,
        app::Uri* address,
        app::String* method_1,
        app::Byte__Array* data,
        app::Object* user_token
    )
    IL2CPP_REGISTER_METHOD(0x020BBCA0, void, add_UploadFileCompleted, app::WebClient* this_ptr, app::UploadFileCompletedEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x020BBD90, void, remove_UploadFileCompleted, app::WebClient* this_ptr, app::UploadFileCompletedEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x020BBE80, void, OnUploadFileCompleted, app::WebClient* this_ptr, app::UploadFileCompletedEventArgs* e)
    IL2CPP_REGISTER_METHOD(0x020BBEA0, void, UploadFileOperationCompleted, app::WebClient* this_ptr, app::Object* arg)
    IL2CPP_REGISTER_METHOD(
        0x020BBF90,
        void,
        UploadFileAsyncWriteCallback,
        app::WebClient* this_ptr,
        app::Byte__Array* return_bytes,
        app::Exception* exception,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(
        0x020BC200,
        void,
        UploadFileAsyncReadCallback,
        app::WebClient* this_ptr,
        app::Byte__Array* return_bytes,
        app::Exception* exception,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(0x020BC400, void, UploadFileAsync_1, app::WebClient* this_ptr, app::Uri* address, app::String* file_name)
    IL2CPP_REGISTER_METHOD(0x020BC420, void, UploadFileAsync_2, app::WebClient* this_ptr, app::Uri* address, app::String* method_1, app::String* file_name)
    IL2CPP_REGISTER_METHOD(
        0x020BC440,
        void,
        UploadFileAsync_3,
        app::WebClient* this_ptr,
        app::Uri* address,
        app::String* method_1,
        app::String* file_name,
        app::Object* user_token
    )
    IL2CPP_REGISTER_METHOD(0x020BCB90, void, add_UploadValuesCompleted, app::WebClient* this_ptr, app::UploadValuesCompletedEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x020BCC80, void, remove_UploadValuesCompleted, app::WebClient* this_ptr, app::UploadValuesCompletedEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x020BCD70, void, OnUploadValuesCompleted, app::WebClient* this_ptr, app::UploadValuesCompletedEventArgs* e)
    IL2CPP_REGISTER_METHOD(0x020BCD90, void, UploadValuesOperationCompleted, app::WebClient* this_ptr, app::Object* arg)
    IL2CPP_REGISTER_METHOD(
        0x020BCE80,
        void,
        UploadValuesAsyncWriteCallback,
        app::WebClient* this_ptr,
        app::Byte__Array* return_bytes,
        app::Exception* exception,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(
        0x020BD0F0,
        void,
        UploadValuesAsyncReadCallback,
        app::WebClient* this_ptr,
        app::Byte__Array* return_bytes,
        app::Exception* exception,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(0x020BD2F0, void, UploadValuesAsync_1, app::WebClient* this_ptr, app::Uri* address, app::NameValueCollection* data)
    IL2CPP_REGISTER_METHOD(
        0x020BD310,
        void,
        UploadValuesAsync_2,
        app::WebClient* this_ptr,
        app::Uri* address,
        app::String* method_1,
        app::NameValueCollection* data
    )
    IL2CPP_REGISTER_METHOD(
        0x020BD330,
        void,
        UploadValuesAsync_3,
        app::WebClient* this_ptr,
        app::Uri* address,
        app::String* method_1,
        app::NameValueCollection* data,
        app::Object* user_token
    )
    IL2CPP_REGISTER_METHOD(0x020BDA00, void, CancelAsync, app::WebClient* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020BDA10, app::Task_1_System_String_*, DownloadStringTaskAsync_1, app::WebClient* this_ptr, app::String* address)
    IL2CPP_REGISTER_METHOD(0x020BDA40, app::Task_1_System_String_*, DownloadStringTaskAsync_2, app::WebClient* this_ptr, app::Uri* address)
    IL2CPP_REGISTER_METHOD(0x020BDE90, app::Task_1_System_IO_Stream_*, OpenReadTaskAsync_1, app::WebClient* this_ptr, app::String* address)
    IL2CPP_REGISTER_METHOD(0x020BDEC0, app::Task_1_System_IO_Stream_*, OpenReadTaskAsync_2, app::WebClient* this_ptr, app::Uri* address)
    IL2CPP_REGISTER_METHOD(0x020BE310, app::Task_1_System_IO_Stream_*, OpenWriteTaskAsync_1, app::WebClient* this_ptr, app::String* address)
    IL2CPP_REGISTER_METHOD(0x020BE340, app::Task_1_System_IO_Stream_*, OpenWriteTaskAsync_2, app::WebClient* this_ptr, app::Uri* address)
    IL2CPP_REGISTER_METHOD(
        0x020BE350,
        app::Task_1_System_IO_Stream_*,
        OpenWriteTaskAsync_3,
        app::WebClient* this_ptr,
        app::String* address,
        app::String* method_1
    )
    IL2CPP_REGISTER_METHOD(0x020BE390, app::Task_1_System_IO_Stream_*, OpenWriteTaskAsync_4, app::WebClient* this_ptr, app::Uri* address, app::String* method_1)
    IL2CPP_REGISTER_METHOD(0x020BE7E0, app::Task_1_System_String_*, UploadStringTaskAsync_1, app::WebClient* this_ptr, app::String* address, app::String* data)
    IL2CPP_REGISTER_METHOD(0x020BE820, app::Task_1_System_String_*, UploadStringTaskAsync_2, app::WebClient* this_ptr, app::Uri* address, app::String* data)
    IL2CPP_REGISTER_METHOD(
        0x020BE840,
        app::Task_1_System_String_*,
        UploadStringTaskAsync_3,
        app::WebClient* this_ptr,
        app::String* address,
        app::String* method_1,
        app::String* data
    )
    IL2CPP_REGISTER_METHOD(
        0x020BE890,
        app::Task_1_System_String_*,
        UploadStringTaskAsync_4,
        app::WebClient* this_ptr,
        app::Uri* address,
        app::String* method_1,
        app::String* data
    )
    IL2CPP_REGISTER_METHOD(0x020BED00, app::Task_1_System_Byte_*, DownloadDataTaskAsync_1, app::WebClient* this_ptr, app::String* address)
    IL2CPP_REGISTER_METHOD(0x020BED30, app::Task_1_System_Byte_*, DownloadDataTaskAsync_2, app::WebClient* this_ptr, app::Uri* address)
    IL2CPP_REGISTER_METHOD(0x020BF0E0, app::Task*, DownloadFileTaskAsync_1, app::WebClient* this_ptr, app::String* address, app::String* file_name)
    IL2CPP_REGISTER_METHOD(0x020BF120, app::Task*, DownloadFileTaskAsync_2, app::WebClient* this_ptr, app::Uri* address, app::String* file_name)
    IL2CPP_REGISTER_METHOD(0x020BF570, app::Task_1_System_Byte_*, UploadDataTaskAsync_1, app::WebClient* this_ptr, app::String* address, app::Byte__Array* data)
    IL2CPP_REGISTER_METHOD(0x020BF5B0, app::Task_1_System_Byte_*, UploadDataTaskAsync_2, app::WebClient* this_ptr, app::Uri* address, app::Byte__Array* data)
    IL2CPP_REGISTER_METHOD(
        0x020BF5D0,
        app::Task_1_System_Byte_*,
        UploadDataTaskAsync_3,
        app::WebClient* this_ptr,
        app::String* address,
        app::String* method_1,
        app::Byte__Array* data
    )
    IL2CPP_REGISTER_METHOD(
        0x020BF620,
        app::Task_1_System_Byte_*,
        UploadDataTaskAsync_4,
        app::WebClient* this_ptr,
        app::Uri* address,
        app::String* method_1,
        app::Byte__Array* data
    )
    IL2CPP_REGISTER_METHOD(0x020BF9E0, app::Task_1_System_Byte_*, UploadFileTaskAsync_1, app::WebClient* this_ptr, app::String* address, app::String* file_name)
    IL2CPP_REGISTER_METHOD(0x020BFA20, app::Task_1_System_Byte_*, UploadFileTaskAsync_2, app::WebClient* this_ptr, app::Uri* address, app::String* file_name)
    IL2CPP_REGISTER_METHOD(
        0x020BFA40,
        app::Task_1_System_Byte_*,
        UploadFileTaskAsync_3,
        app::WebClient* this_ptr,
        app::String* address,
        app::String* method_1,
        app::String* file_name
    )
    IL2CPP_REGISTER_METHOD(
        0x020BFA90,
        app::Task_1_System_Byte_*,
        UploadFileTaskAsync_4,
        app::WebClient* this_ptr,
        app::Uri* address,
        app::String* method_1,
        app::String* file_name
    )
    IL2CPP_REGISTER_METHOD(
        0x020BFF00,
        app::Task_1_System_Byte_*,
        UploadValuesTaskAsync_1,
        app::WebClient* this_ptr,
        app::String* address,
        app::NameValueCollection* data
    )
    IL2CPP_REGISTER_METHOD(
        0x020BFF40,
        app::Task_1_System_Byte_*,
        UploadValuesTaskAsync_2,
        app::WebClient* this_ptr,
        app::String* address,
        app::String* method_1,
        app::NameValueCollection* data
    )
    IL2CPP_REGISTER_METHOD(
        0x020BFF90,
        app::Task_1_System_Byte_*,
        UploadValuesTaskAsync_3,
        app::WebClient* this_ptr,
        app::Uri* address,
        app::NameValueCollection* data
    )
    IL2CPP_REGISTER_METHOD(
        0x020BFFB0,
        app::Task_1_System_Byte_*,
        UploadValuesTaskAsync_4,
        app::WebClient* this_ptr,
        app::Uri* address,
        app::String* method_1,
        app::NameValueCollection* data
    )
    IL2CPP_REGISTER_METHOD(0x020C0420, void, add_DownloadProgressChanged, app::WebClient* this_ptr, app::DownloadProgressChangedEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x020C0510, void, remove_DownloadProgressChanged, app::WebClient* this_ptr, app::DownloadProgressChangedEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x020C0600, void, add_UploadProgressChanged, app::WebClient* this_ptr, app::UploadProgressChangedEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x020C06F0, void, remove_UploadProgressChanged, app::WebClient* this_ptr, app::UploadProgressChangedEventHandler* value)
    IL2CPP_REGISTER_METHOD(0x020C07E0, void, OnDownloadProgressChanged, app::WebClient* this_ptr, app::DownloadProgressChangedEventArgs* e)
    IL2CPP_REGISTER_METHOD(0x020C0800, void, OnUploadProgressChanged, app::WebClient* this_ptr, app::UploadProgressChangedEventArgs* e)
    IL2CPP_REGISTER_METHOD(0x020C0820, void, ReportDownloadProgressChanged, app::WebClient* this_ptr, app::Object* arg)
    IL2CPP_REGISTER_METHOD(0x020C0910, void, ReportUploadProgressChanged, app::WebClient* this_ptr, app::Object* arg)
    IL2CPP_REGISTER_METHOD(
        0x020C0A00,
        void,
        PostProgressChanged,
        app::WebClient* this_ptr,
        app::AsyncOperation* async_op,
        app::WebClient_ProgressData* progress
    )
    IL2CPP_REGISTER_METHOD(
        0x01AF1660,
        void,
        HandleCompletion_1,
        app::WebClient* this_ptr,
        app::TaskCompletionSource_1_System_Object_* tcs,
        app::Object* e,
        app::Func_2_Object_Object_* get_result,
        app::Object* handler,
        app::Action_2_System_Net_WebClient_Object_* unregister_handler
    )
    IL2CPP_REGISTER_METHOD(
        0x01AF1660,
        void,
        HandleCompletion_2,
        app::WebClient* this_ptr,
        app::TaskCompletionSource_1_System_String_* tcs,
        app::DownloadStringCompletedEventArgs* e,
        app::Func_2_System_Net_DownloadStringCompletedEventArgs_String_* get_result,
        app::DownloadStringCompletedEventHandler* handler,
        app::Action_2_System_Net_WebClient_System_Net_DownloadStringCompletedEventHandler_* unregister_handler
    )
    IL2CPP_REGISTER_METHOD(
        0x01AF1660,
        void,
        HandleCompletion_3,
        app::WebClient* this_ptr,
        app::TaskCompletionSource_1_System_IO_Stream_* tcs,
        app::OpenReadCompletedEventArgs* e,
        app::Func_2_System_Net_OpenReadCompletedEventArgs_System_IO_Stream_* get_result,
        app::OpenReadCompletedEventHandler* handler,
        app::Action_2_System_Net_WebClient_System_Net_OpenReadCompletedEventHandler_* unregister_handler
    )
    IL2CPP_REGISTER_METHOD(
        0x01AF1660,
        void,
        HandleCompletion_4,
        app::WebClient* this_ptr,
        app::TaskCompletionSource_1_System_IO_Stream_* tcs,
        app::OpenWriteCompletedEventArgs* e,
        app::Func_2_System_Net_OpenWriteCompletedEventArgs_System_IO_Stream_* get_result,
        app::OpenWriteCompletedEventHandler* handler,
        app::Action_2_System_Net_WebClient_System_Net_OpenWriteCompletedEventHandler_* unregister_handler
    )
    IL2CPP_REGISTER_METHOD(
        0x01AF1660,
        void,
        HandleCompletion_5,
        app::WebClient* this_ptr,
        app::TaskCompletionSource_1_System_String_* tcs,
        app::UploadStringCompletedEventArgs* e,
        app::Func_2_System_Net_UploadStringCompletedEventArgs_String_* get_result,
        app::UploadStringCompletedEventHandler* handler,
        app::Action_2_System_Net_WebClient_System_Net_UploadStringCompletedEventHandler_* unregister_handler
    )
    IL2CPP_REGISTER_METHOD(
        0x01AF1660,
        void,
        HandleCompletion_6,
        app::WebClient* this_ptr,
        app::TaskCompletionSource_1_System_Byte_* tcs,
        app::DownloadDataCompletedEventArgs* e,
        app::Func_2_System_Net_DownloadDataCompletedEventArgs_Byte_* get_result,
        app::DownloadDataCompletedEventHandler* handler,
        app::Action_2_System_Net_WebClient_System_Net_DownloadDataCompletedEventHandler_* unregister_handler
    )
    IL2CPP_REGISTER_METHOD(
        0x01AF1660,
        void,
        HandleCompletion_7,
        app::WebClient* this_ptr,
        app::TaskCompletionSource_1_System_Object_* tcs,
        app::AsyncCompletedEventArgs* e,
        app::Func_2_System_ComponentModel_AsyncCompletedEventArgs_Object_* get_result,
        app::AsyncCompletedEventHandler* handler,
        app::Action_2_System_Net_WebClient_System_ComponentModel_AsyncCompletedEventHandler_* unregister_handler
    )
    IL2CPP_REGISTER_METHOD(
        0x01AF1660,
        void,
        HandleCompletion_8,
        app::WebClient* this_ptr,
        app::TaskCompletionSource_1_System_Byte_* tcs,
        app::UploadDataCompletedEventArgs* e,
        app::Func_2_System_Net_UploadDataCompletedEventArgs_Byte_* get_result,
        app::UploadDataCompletedEventHandler* handler,
        app::Action_2_System_Net_WebClient_System_Net_UploadDataCompletedEventHandler_* unregister_handler
    )
    IL2CPP_REGISTER_METHOD(
        0x01AF1660,
        void,
        HandleCompletion_9,
        app::WebClient* this_ptr,
        app::TaskCompletionSource_1_System_Byte_* tcs,
        app::UploadFileCompletedEventArgs* e,
        app::Func_2_System_Net_UploadFileCompletedEventArgs_Byte_* get_result,
        app::UploadFileCompletedEventHandler* handler,
        app::Action_2_System_Net_WebClient_System_Net_UploadFileCompletedEventHandler_* unregister_handler
    )
    IL2CPP_REGISTER_METHOD(
        0x01AF1660,
        void,
        HandleCompletion_10,
        app::WebClient* this_ptr,
        app::TaskCompletionSource_1_System_Byte_* tcs,
        app::UploadValuesCompletedEventArgs* e,
        app::Func_2_System_Net_UploadValuesCompletedEventArgs_Byte_* get_result,
        app::UploadValuesCompletedEventHandler* handler,
        app::Action_2_System_Net_WebClient_System_Net_UploadValuesCompletedEventHandler_* unregister_handler
    )
} // namespace app::classes::System::Net::WebClient
