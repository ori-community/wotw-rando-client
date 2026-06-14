#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsEnumConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsEnumConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsEnumConverter_DEFINED)
#include <Modloader/app/structs/fsEnumConverter__Fields.h>
#if defined(IL2CPP_STRUCT_fsEnumConverter__Fields_DEFINED)
#define IL2CPP_STRUCT_fsEnumConverter_DEFINED
struct fsEnumConverter__Class;
struct fsEnumConverter {
    struct fsEnumConverter__Class* klass;
    MonitorData* monitor;
    struct fsEnumConverter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_fsEnumConverter_FWDDECL)
#define IL2CPP_STRUCT_fsEnumConverter_FWDDECL
#include <Modloader/app/structs/fsEnumConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_fsEnumConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsEnumConverter_DEFINED) && !defined(IL2CPP_STRUCT_fsEnumConverter_FWDDECL)
#include <Modloader/app/structs/fsEnumConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsEnumConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
