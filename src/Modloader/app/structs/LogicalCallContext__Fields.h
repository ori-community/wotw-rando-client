#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LogicalCallContext__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LogicalCallContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LogicalCallContext__Fields_DEFINED)
#define IL2CPP_STRUCT_LogicalCallContext__Fields_DEFINED
struct Hashtable;
struct CallContextRemotingData;
struct CallContextSecurityData;
struct Object;
struct Header__Array;
struct __declspec(align(8)) LogicalCallContext__Fields {
    struct Hashtable* m_Datastore;
    struct CallContextRemotingData* m_RemotingData;
    struct CallContextSecurityData* m_SecurityData;
    struct Object* m_HostContext;
    bool m_IsCorrelationMgr;
    struct Header__Array* _sendHeaders;
    struct Header__Array* _recvHeaders;
};
#endif
#if !defined(IL2CPP_STRUCT_LogicalCallContext__Fields_FWDDECL)
#define IL2CPP_STRUCT_LogicalCallContext__Fields_FWDDECL
#include <Modloader/app/structs/CallContextRemotingData.h>
#include <Modloader/app/structs/CallContextSecurityData.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/Header__Array.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_LogicalCallContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LogicalCallContext__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LogicalCallContext__Fields_FWDDECL)
#include <Modloader/app/structs/LogicalCallContext__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LogicalCallContext__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
