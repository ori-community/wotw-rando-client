#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WebConnectionStream.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/HttpWebRequest.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SeekOrigin__Enum.h>
#include <Modloader/app/structs/SimpleAsyncCallback.h>
#include <Modloader/app/structs/SimpleAsyncResult.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/WebConnection.h>
#include <Modloader/app/structs/WebConnectionData.h>

namespace app::classes::System::Net::WebConnectionStream {
    IL2CPP_REGISTER_METHOD(0x01D6A890, void, ctor_1, (app::WebConnectionStream * this_ptr, app::WebConnection* cnc, app::WebConnectionData* data))
    IL2CPP_REGISTER_METHOD(0x01D6ADF0, void, ctor_2, (app::WebConnectionStream * this_ptr, app::WebConnection* cnc, app::HttpWebRequest* request))
    IL2CPP_REGISTER_METHOD(0x01D6B260, bool, CheckAuthHeader, (app::WebConnectionStream * this_ptr, app::String* header_name))
    IL2CPP_REGISTER_METHOD(0x01D6B370, bool, IsNtlmAuth, (app::WebConnectionStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D6B490, void, CheckResponseInBuffer, (app::WebConnectionStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::HttpWebRequest*, get_Request, (app::WebConnectionStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::WebConnection*, get_Connection, (app::WebConnectionStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanTimeout, (app::WebConnectionStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00855600, int32_t, get_ReadTimeout, (app::WebConnectionStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D6B4E0, void, set_ReadTimeout, (app::WebConnectionStream * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x008519C0, int32_t, get_WriteTimeout, (app::WebConnectionStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D6B5A0, void, set_WriteTimeout, (app::WebConnectionStream * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01D6B660, bool, get_CompleteRequestWritten, (app::WebConnectionStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FBE60, void, set_SendChunked, (app::WebConnectionStream * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_ReadBuffer, (app::WebConnectionStream * this_ptr, app::Byte__Array* value))
    IL2CPP_REGISTER_METHOD(0x008F7CD0, void, set_ReadBufferOffset, (app::WebConnectionStream * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00843E80, void, set_ReadBufferSize, (app::WebConnectionStream * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01D6B670, app::Byte__Array*, get_WriteBuffer, (app::WebConnectionStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D6B6A0, int32_t, get_WriteBufferLength, (app::WebConnectionStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D6B6D0, void, ForceCompletion, (app::WebConnectionStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D6B720, void, CheckComplete, (app::WebConnectionStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D6B760, void, ReadAll, (app::WebConnectionStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D6BC60, void, WriteCallbackWrapper, (app::WebConnectionStream * this_ptr, app::IAsyncResult* r))
    IL2CPP_REGISTER_METHOD(0x01D6BDE0, void, ReadCallbackWrapper, (app::WebConnectionStream * this_ptr, app::IAsyncResult* r))
    IL2CPP_REGISTER_METHOD(0x01D6BF60, int32_t, Read, (app::WebConnectionStream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t size))
    IL2CPP_REGISTER_METHOD(0x01D6C130, app::IAsyncResult*, BeginRead, (app::WebConnectionStream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t size, app::AsyncCallback* cb, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x01D6C620, int32_t, EndRead, (app::WebConnectionStream * this_ptr, app::IAsyncResult* r))
    IL2CPP_REGISTER_METHOD(0x01D6CA30, void, WriteAsyncCB, (app::WebConnectionStream * this_ptr, app::IAsyncResult* r))
    IL2CPP_REGISTER_METHOD(0x01D6CD90, app::IAsyncResult*, BeginWrite, (app::WebConnectionStream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t size, app::AsyncCallback* cb, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x01D6D8F0, void, CheckWriteOverflow, (app::WebConnectionStream * this_ptr, int64_t content_length, int64_t total_written, int64_t size))
    IL2CPP_REGISTER_METHOD(0x01D6DA00, void, EndWrite, (app::WebConnectionStream * this_ptr, app::IAsyncResult* r))
    IL2CPP_REGISTER_METHOD(0x01D6DCD0, void, Write, (app::WebConnectionStream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t size))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Flush, (app::WebConnectionStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D6DEB0, void, SetHeadersAsync_1, (app::WebConnectionStream * this_ptr, bool set_internal_length, app::SimpleAsyncCallback* callback))
    IL2CPP_REGISTER_METHOD(0x01D6E100, bool, SetHeadersAsync_2, (app::WebConnectionStream * this_ptr, app::SimpleAsyncResult* result, bool set_internal_length))
    IL2CPP_REGISTER_METHOD(0x0061E2F0, bool, get_RequestWritten, (app::WebConnectionStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D6E6C0, app::SimpleAsyncResult*, WriteRequestAsync_1, (app::WebConnectionStream * this_ptr, app::SimpleAsyncCallback* callback))
    IL2CPP_REGISTER_METHOD(0x01D6E800, bool, WriteRequestAsync_2, (app::WebConnectionStream * this_ptr, app::SimpleAsyncResult* result))
    IL2CPP_REGISTER_METHOD(0x00A48970, void, InternalClose, (app::WebConnectionStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009CA200, bool, get_GetResponseOnClose, (app::WebConnectionStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009CA210, void, set_GetResponseOnClose, (app::WebConnectionStream * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01D6EB90, void, Close, (app::WebConnectionStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006DF410, void, KillBuffer, (app::WebConnectionStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D6EF70, int64_t, Seek, (app::WebConnectionStream * this_ptr, int64_t a, app::SeekOrigin__Enum b))
    IL2CPP_REGISTER_METHOD(0x01D6EFC0, void, SetLength, (app::WebConnectionStream * this_ptr, int64_t a))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanSeek, (app::WebConnectionStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D6F010, bool, get_CanRead, (app::WebConnectionStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D6F030, bool, get_CanWrite, (app::WebConnectionStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D6F050, int64_t, get_Length, (app::WebConnectionStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D6F100, int64_t, get_Position, (app::WebConnectionStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D6F150, void, set_Position, (app::WebConnectionStream * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x01D6F1A0, void, cctor, ())
} // namespace app::classes::System::Net::WebConnectionStream
