#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Alert.h>
#include <Modloader/app/structs/AlertDescription__Enum_1.h>
#include <Modloader/app/structs/AlertLevel__Enum.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/ContentType__Enum.h>
#include <Modloader/app/structs/Context_1.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/HandshakeMessage.h>
#include <Modloader/app/structs/HandshakeType__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RecordProtocol.h>
#include <Modloader/app/structs/Stream.h>

namespace app::classes::Mono::Security::Protocol::Tls::RecordProtocol {
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Context_1*, get_Context, app::RecordProtocol* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Context, app::RecordProtocol* this_ptr, app::Context_1* value)
    IL2CPP_REGISTER_METHOD(0x01F77320, void, ctor, app::RecordProtocol* this_ptr, app::Stream* inner_stream, app::Context_1* context)
    IL2CPP_REGISTER_METHOD(0x01F77350, void, SendRecord_1, app::RecordProtocol* this_ptr, app::HandshakeType__Enum type)
    IL2CPP_REGISTER_METHOD(0x01F77380, void, ProcessChangeCipherSpec, app::RecordProtocol* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F774A0, app::HandshakeMessage*, GetMessage, app::RecordProtocol* this_ptr, app::HandshakeType__Enum type)
    IL2CPP_REGISTER_METHOD(
        0x01F774F0,
        app::IAsyncResult*,
        BeginReceiveRecord,
        app::RecordProtocol* this_ptr,
        app::Stream* record,
        app::AsyncCallback* callback,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(0x01F77940, void, InternalReceiveRecordCallback, app::RecordProtocol* this_ptr, app::IAsyncResult* async_result)
    IL2CPP_REGISTER_METHOD(0x01F77E00, app::Byte__Array*, EndReceiveRecord, app::RecordProtocol* this_ptr, app::IAsyncResult* async_result)
    IL2CPP_REGISTER_METHOD(0x01F77FB0, app::Byte__Array*, ReceiveRecord, app::RecordProtocol* this_ptr, app::Stream* record)
    IL2CPP_REGISTER_METHOD(0x01F784B0, app::Byte__Array*, ReadRecordBuffer, app::RecordProtocol* this_ptr, int32_t content_type, app::Stream* record)
    IL2CPP_REGISTER_METHOD(
        0x01F78840,
        void,
        ProcessAlert,
        app::RecordProtocol* this_ptr,
        app::AlertLevel__Enum alert_level,
        app::AlertDescription__Enum_1 alert_desc
    )
    IL2CPP_REGISTER_METHOD(0x01F78920, void, SendAlert_1, app::RecordProtocol* this_ptr, app::Exception** ex)
    IL2CPP_REGISTER_METHOD(0x01F78BF0, void, SendAlert_2, app::RecordProtocol* this_ptr, app::AlertDescription__Enum_1 description)
    IL2CPP_REGISTER_METHOD(0x01F78D60, void, SendAlert_3, app::RecordProtocol* this_ptr, app::AlertLevel__Enum level, app::AlertDescription__Enum_1 description)
    IL2CPP_REGISTER_METHOD(0x01F78ED0, void, SendAlert_4, app::RecordProtocol* this_ptr, app::Alert* alert)
    IL2CPP_REGISTER_METHOD(0x01F79020, void, SendChangeCipherSpec_1, app::RecordProtocol* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F79190, void, SendChangeCipherSpec_2, app::RecordProtocol* this_ptr, app::Stream* record_stream)
    IL2CPP_REGISTER_METHOD(
        0x01F79340,
        app::IAsyncResult*,
        BeginSendChangeCipherSpec,
        app::RecordProtocol* this_ptr,
        app::AsyncCallback* callback,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(0x01F79430, void, EndSendChangeCipherSpec, app::RecordProtocol* this_ptr, app::IAsyncResult* async_result)
    IL2CPP_REGISTER_METHOD(
        0x01F79560,
        app::IAsyncResult*,
        BeginSendRecord_1,
        app::RecordProtocol* this_ptr,
        app::HandshakeType__Enum handshake_type,
        app::AsyncCallback* callback,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(0x01F79920, void, InternalSendRecordCallback, app::RecordProtocol* this_ptr, app::IAsyncResult* ar)
    IL2CPP_REGISTER_METHOD(
        0x01F79AD0,
        app::IAsyncResult*,
        BeginSendRecord_2,
        app::RecordProtocol* this_ptr,
        app::ContentType__Enum content_type,
        app::Byte__Array* record_data,
        app::AsyncCallback* callback,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(0x01F79C40, void, EndSendRecord, app::RecordProtocol* this_ptr, app::IAsyncResult* async_result)
    IL2CPP_REGISTER_METHOD(0x01F79DE0, void, SendRecord_2, app::RecordProtocol* this_ptr, app::ContentType__Enum content_type, app::Byte__Array* record_data)
    IL2CPP_REGISTER_METHOD(
        0x01F79E10,
        app::Byte__Array*,
        EncodeRecord_1,
        app::RecordProtocol* this_ptr,
        app::ContentType__Enum content_type,
        app::Byte__Array* record_data
    )
    IL2CPP_REGISTER_METHOD(
        0x01F79E40,
        app::Byte__Array*,
        EncodeRecord_2,
        app::RecordProtocol* this_ptr,
        app::ContentType__Enum content_type,
        app::Byte__Array* record_data,
        int32_t offset,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x01F7A180, app::Byte__Array*, EncodeHandshakeRecord, app::RecordProtocol* this_ptr, app::HandshakeType__Enum handshake_type)
    IL2CPP_REGISTER_METHOD(
        0x01F7A280,
        app::Byte__Array*,
        encryptRecordFragment,
        app::RecordProtocol* this_ptr,
        app::ContentType__Enum content_type,
        app::Byte__Array* fragment
    )
    IL2CPP_REGISTER_METHOD(
        0x01F7A440,
        app::Byte__Array*,
        decryptRecordFragment,
        app::RecordProtocol* this_ptr,
        app::ContentType__Enum content_type,
        app::Byte__Array* fragment
    )
    IL2CPP_REGISTER_METHOD(0x01F7A750, bool, Compare, app::RecordProtocol* this_ptr, app::Byte__Array* array1, app::Byte__Array* array2)
    IL2CPP_REGISTER_METHOD(0x01F7A7D0, void, cctor, )
} // namespace app::classes::Mono::Security::Protocol::Tls::RecordProtocol
