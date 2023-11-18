#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeSpanTypeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeSpanTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSpanTypeInfo_DEFINED)
#include <Modloader/app/structs/TimeSpanTypeInfo__Fields.h>
#if defined(IL2CPP_STRUCT_TimeSpanTypeInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_TimeSpanTypeInfo_DEFINED
struct TimeSpanTypeInfo__Class;
struct TimeSpanTypeInfo {
    struct TimeSpanTypeInfo__Class* klass;
    MonitorData* monitor;
    struct TimeSpanTypeInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimeSpanTypeInfo_FWDDECL)
#define IL2CPP_STRUCT_TimeSpanTypeInfo_FWDDECL
#include <Modloader/app/structs/TimeSpanTypeInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_TimeSpanTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSpanTypeInfo_DEFINED) && !defined(IL2CPP_STRUCT_TimeSpanTypeInfo_FWDDECL)
#include <Modloader/app/structs/TimeSpanTypeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeSpanTypeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
