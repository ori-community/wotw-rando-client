#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DateTimeParse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DateTimeParse_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeParse_DEFINED)
#define IL2CPP_STRUCT_DateTimeParse_DEFINED
struct DateTimeParse__Class;
struct DateTimeParse {
    struct DateTimeParse__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DateTimeParse_FWDDECL)
#define IL2CPP_STRUCT_DateTimeParse_FWDDECL
#include <Modloader/app/structs/DateTimeParse__Class.h>
#endif
#undef IL2CPP_STRUCT_DateTimeParse_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeParse_DEFINED) && !defined(IL2CPP_STRUCT_DateTimeParse_FWDDECL)
#include <Modloader/app/structs/DateTimeParse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DateTimeParse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
