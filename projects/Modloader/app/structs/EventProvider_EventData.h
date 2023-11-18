#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventProvider_EventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventProvider_EventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventProvider_EventData_DEFINED)
#define IL2CPP_STRUCT_EventProvider_EventData_DEFINED
struct EventProvider_EventData {
    uint64_t Ptr;
    uint32_t Size;
    uint32_t Reserved;
};
#endif
#if !defined(IL2CPP_STRUCT_EventProvider_EventData_FWDDECL)
#define IL2CPP_STRUCT_EventProvider_EventData_FWDDECL
#endif
#undef IL2CPP_STRUCT_EventProvider_EventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventProvider_EventData_DEFINED) && !defined(IL2CPP_STRUCT_EventProvider_EventData_FWDDECL)
#include <Modloader/app/structs/EventProvider_EventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventProvider_EventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
