#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsGuidConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsGuidConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsGuidConverter_DEFINED)
#include <Modloader/app/structs/fsGuidConverter__Fields.h>
#if defined(IL2CPP_STRUCT_fsGuidConverter__Fields_DEFINED)
#define IL2CPP_STRUCT_fsGuidConverter_DEFINED
struct fsGuidConverter__Class;
struct fsGuidConverter {
    struct fsGuidConverter__Class* klass;
    MonitorData* monitor;
    struct fsGuidConverter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_fsGuidConverter_FWDDECL)
#define IL2CPP_STRUCT_fsGuidConverter_FWDDECL
#include <Modloader/app/structs/fsGuidConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_fsGuidConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsGuidConverter_DEFINED) && !defined(IL2CPP_STRUCT_fsGuidConverter_FWDDECL)
#include <Modloader/app/structs/fsGuidConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsGuidConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
