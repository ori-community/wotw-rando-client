#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecordProtocol_SendRecordAsyncResult__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecordProtocol_SendRecordAsyncResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecordProtocol_SendRecordAsyncResult__Fields_DEFINED)
#define IL2CPP_STRUCT_RecordProtocol_SendRecordAsyncResult__Fields_DEFINED
struct Object;
struct AsyncCallback;
struct Exception;
struct ManualResetEvent;
struct HandshakeMessage;
struct __declspec(align(8)) RecordProtocol_SendRecordAsyncResult__Fields {
    struct Object* locker;
    struct AsyncCallback* _userCallback;
    struct Object* _userState;
    struct Exception* _asyncException;
    struct ManualResetEvent* handle;
    struct HandshakeMessage* _message;
    bool completed;
};
#endif
#if !defined(IL2CPP_STRUCT_RecordProtocol_SendRecordAsyncResult__Fields_FWDDECL)
#define IL2CPP_STRUCT_RecordProtocol_SendRecordAsyncResult__Fields_FWDDECL
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/HandshakeMessage.h>
#include <Modloader/app/structs/ManualResetEvent.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_RecordProtocol_SendRecordAsyncResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecordProtocol_SendRecordAsyncResult__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RecordProtocol_SendRecordAsyncResult__Fields_FWDDECL)
#include <Modloader/app/structs/RecordProtocol_SendRecordAsyncResult__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecordProtocol_SendRecordAsyncResult__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
