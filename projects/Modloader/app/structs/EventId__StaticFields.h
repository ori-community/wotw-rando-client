#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventId__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventId__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventId__StaticFields_DEFINED)
#define IL2CPP_STRUCT_EventId__StaticFields_DEFINED
struct Int32__Array;
struct EventId__StaticFields {
    struct Int32__Array* StandardEvents;
};
#endif
#if !defined(IL2CPP_STRUCT_EventId__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_EventId__StaticFields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#endif
#undef IL2CPP_STRUCT_EventId__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventId__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_EventId__StaticFields_FWDDECL)
#include <Modloader/app/structs/EventId__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventId__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
