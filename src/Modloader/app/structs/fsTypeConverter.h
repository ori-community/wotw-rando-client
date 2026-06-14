#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsTypeConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsTypeConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsTypeConverter_DEFINED)
#include <Modloader/app/structs/fsTypeConverter__Fields.h>
#if defined(IL2CPP_STRUCT_fsTypeConverter__Fields_DEFINED)
#define IL2CPP_STRUCT_fsTypeConverter_DEFINED
struct fsTypeConverter__Class;
struct fsTypeConverter {
    struct fsTypeConverter__Class* klass;
    MonitorData* monitor;
    struct fsTypeConverter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_fsTypeConverter_FWDDECL)
#define IL2CPP_STRUCT_fsTypeConverter_FWDDECL
#include <Modloader/app/structs/fsTypeConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_fsTypeConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsTypeConverter_DEFINED) && !defined(IL2CPP_STRUCT_fsTypeConverter_FWDDECL)
#include <Modloader/app/structs/fsTypeConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsTypeConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
