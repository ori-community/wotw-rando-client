#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoEventInfo__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoEventInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoEventInfo__Boxed_DEFINED)
#include <Modloader/app/structs/MonoEventInfo.h>
#if defined(IL2CPP_STRUCT_MonoEventInfo_DEFINED)
#define IL2CPP_STRUCT_MonoEventInfo__Boxed_DEFINED
struct MonoEventInfo__Class;
struct MonoEventInfo__Boxed {
    struct MonoEventInfo__Class* klass;
    MonitorData* monitor;
    struct MonoEventInfo fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoEventInfo__Boxed_FWDDECL)
#define IL2CPP_STRUCT_MonoEventInfo__Boxed_FWDDECL
#include <Modloader/app/structs/MonoEventInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_MonoEventInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoEventInfo__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_MonoEventInfo__Boxed_FWDDECL)
#include <Modloader/app/structs/MonoEventInfo__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoEventInfo__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
