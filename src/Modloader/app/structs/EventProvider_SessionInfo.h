#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventProvider_SessionInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventProvider_SessionInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventProvider_SessionInfo_DEFINED)
#define IL2CPP_STRUCT_EventProvider_SessionInfo_DEFINED
struct EventProvider_SessionInfo {
    int32_t sessionIdBit;
    int32_t etwSessionId;
};
#endif
#if !defined(IL2CPP_STRUCT_EventProvider_SessionInfo_FWDDECL)
#define IL2CPP_STRUCT_EventProvider_SessionInfo_FWDDECL
#endif
#undef IL2CPP_STRUCT_EventProvider_SessionInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventProvider_SessionInfo_DEFINED) && !defined(IL2CPP_STRUCT_EventProvider_SessionInfo_FWDDECL)
#include <Modloader/app/structs/EventProvider_SessionInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventProvider_SessionInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
