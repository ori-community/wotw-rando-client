#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DateTimeFormat_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DateTimeFormat_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeFormat_DEFINED)
#define IL2CPP_STRUCT_DateTimeFormat_DEFINED
struct DateTimeFormat__Class;
struct DateTimeFormat {
    struct DateTimeFormat__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DateTimeFormat_FWDDECL)
#define IL2CPP_STRUCT_DateTimeFormat_FWDDECL
#include <Modloader/app/structs/DateTimeFormat__Class.h>
#endif
#undef IL2CPP_STRUCT_DateTimeFormat_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeFormat_DEFINED) && !defined(IL2CPP_STRUCT_DateTimeFormat_FWDDECL)
#include <Modloader/app/structs/DateTimeFormat.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DateTimeFormat.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
