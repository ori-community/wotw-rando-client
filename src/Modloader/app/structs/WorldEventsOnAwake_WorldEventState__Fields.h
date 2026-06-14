#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WorldEventsOnAwake_WorldEventState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WorldEventsOnAwake_WorldEventState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldEventsOnAwake_WorldEventState__Fields_DEFINED)
#define IL2CPP_STRUCT_WorldEventsOnAwake_WorldEventState__Fields_DEFINED
struct WorldEvents;
struct __declspec(align(8)) WorldEventsOnAwake_WorldEventState__Fields {
    struct WorldEvents* WorldEvent;
    int32_t State;
};
#endif
#if !defined(IL2CPP_STRUCT_WorldEventsOnAwake_WorldEventState__Fields_FWDDECL)
#define IL2CPP_STRUCT_WorldEventsOnAwake_WorldEventState__Fields_FWDDECL
#include <Modloader/app/structs/WorldEvents.h>
#endif
#undef IL2CPP_STRUCT_WorldEventsOnAwake_WorldEventState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldEventsOnAwake_WorldEventState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WorldEventsOnAwake_WorldEventState__Fields_FWDDECL)
#include <Modloader/app/structs/WorldEventsOnAwake_WorldEventState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WorldEventsOnAwake_WorldEventState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
