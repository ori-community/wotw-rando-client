#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RecordProtocol_ReceiveRecordAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/WaitHandle.h>

namespace app::classes::Mono::Security::Protocol::Tls::RecordProtocol_ReceiveRecordAsyncResult {
    IL2CPP_REGISTER_METHOD(0x01F7A930, void, ctor, (app::RecordProtocol_ReceiveRecordAsyncResult * this_ptr, app::AsyncCallback* user_callback, app::Object* user_state, app::Byte__Array* initial_buffer, app::Stream* record))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::Stream*, get_Record, (app::RecordProtocol_ReceiveRecordAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::Byte__Array*, get_ResultingBuffer, (app::RecordProtocol_ReceiveRecordAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::Byte__Array*, get_InitialBuffer, (app::RecordProtocol_ReceiveRecordAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Object*, get_AsyncState, (app::RecordProtocol_ReceiveRecordAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Exception*, get_AsyncException, (app::RecordProtocol_ReceiveRecordAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F7AAA0, bool, get_CompletedWithError, (app::RecordProtocol_ReceiveRecordAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F7AAD0, app::WaitHandle*, get_AsyncWaitHandle, (app::RecordProtocol_ReceiveRecordAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CompletedSynchronously, (app::RecordProtocol_ReceiveRecordAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F7AD20, bool, get_IsCompleted, (app::RecordProtocol_ReceiveRecordAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F7AE10, void, SetComplete_1, (app::RecordProtocol_ReceiveRecordAsyncResult * this_ptr, app::Exception* ex, app::Byte__Array* resulting_buffer))
    IL2CPP_REGISTER_METHOD(0x01F7AF50, void, SetComplete_2, (app::RecordProtocol_ReceiveRecordAsyncResult * this_ptr, app::Exception* ex))
    IL2CPP_REGISTER_METHOD(0x01F7AF60, void, SetComplete_3, (app::RecordProtocol_ReceiveRecordAsyncResult * this_ptr, app::Byte__Array* resulting_buffer))
    IL2CPP_REGISTER_METHOD(0x01F7AF70, void, SetComplete_4, (app::RecordProtocol_ReceiveRecordAsyncResult * this_ptr))
} // namespace app::classes::Mono::Security::Protocol::Tls::RecordProtocol_ReceiveRecordAsyncResult
