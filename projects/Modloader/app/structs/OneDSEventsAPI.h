#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OneDSEventsAPI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OneDSEventsAPI_INITIALIZING
#if !defined(IL2CPP_STRUCT_OneDSEventsAPI_DEFINED)
#include <Modloader/app/structs/OneDSEventsAPI__Fields.h>
#if defined(IL2CPP_STRUCT_OneDSEventsAPI__Fields_DEFINED)
#define IL2CPP_STRUCT_OneDSEventsAPI_DEFINED
struct OneDSEventsAPI__Class;
struct OneDSEventsAPI {
    struct OneDSEventsAPI__Class* klass;
    MonitorData* monitor;
    struct OneDSEventsAPI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OneDSEventsAPI_FWDDECL)
#define IL2CPP_STRUCT_OneDSEventsAPI_FWDDECL
#include <Modloader/app/structs/OneDSEventsAPI__Class.h>
#endif
#undef IL2CPP_STRUCT_OneDSEventsAPI_INITIALIZING
#if !defined(IL2CPP_STRUCT_OneDSEventsAPI_DEFINED) && !defined(IL2CPP_STRUCT_OneDSEventsAPI_FWDDECL)
#include <Modloader/app/structs/OneDSEventsAPI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OneDSEventsAPI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
