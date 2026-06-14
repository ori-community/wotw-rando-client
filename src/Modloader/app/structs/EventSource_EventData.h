#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventSource_EventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventSource_EventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventSource_EventData_DEFINED)
#define IL2CPP_STRUCT_EventSource_EventData_DEFINED
struct EventSource_EventData {
    int64_t m_Ptr;
    int32_t m_Size;
    int32_t m_Reserved;
};
#endif
#if !defined(IL2CPP_STRUCT_EventSource_EventData_FWDDECL)
#define IL2CPP_STRUCT_EventSource_EventData_FWDDECL
#endif
#undef IL2CPP_STRUCT_EventSource_EventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventSource_EventData_DEFINED) && !defined(IL2CPP_STRUCT_EventSource_EventData_FWDDECL)
#include <Modloader/app/structs/EventSource_EventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventSource_EventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
