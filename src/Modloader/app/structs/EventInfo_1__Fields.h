#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventInfo_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventInfo_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventInfo_1__Fields_DEFINED)
#define IL2CPP_STRUCT_EventInfo_1__Fields_DEFINED
struct EventInfo_AddEventAdapter;
struct __declspec(align(8)) EventInfo_1__Fields {
    struct EventInfo_AddEventAdapter* cached_add_event;
};
#endif
#if !defined(IL2CPP_STRUCT_EventInfo_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_EventInfo_1__Fields_FWDDECL
#include <Modloader/app/structs/EventInfo_AddEventAdapter.h>
#endif
#undef IL2CPP_STRUCT_EventInfo_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventInfo_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EventInfo_1__Fields_FWDDECL)
#include <Modloader/app/structs/EventInfo_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventInfo_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
