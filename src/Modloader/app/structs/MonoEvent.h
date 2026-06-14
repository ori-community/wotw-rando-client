#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoEvent_DEFINED)
#include <Modloader/app/structs/MonoEvent__Fields.h>
#if defined(IL2CPP_STRUCT_MonoEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_MonoEvent_DEFINED
struct MonoEvent__Class;
struct MonoEvent {
    struct MonoEvent__Class* klass;
    MonitorData* monitor;
    struct MonoEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoEvent_FWDDECL)
#define IL2CPP_STRUCT_MonoEvent_FWDDECL
#include <Modloader/app/structs/MonoEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_MonoEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoEvent_DEFINED) && !defined(IL2CPP_STRUCT_MonoEvent_FWDDECL)
#include <Modloader/app/structs/MonoEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
