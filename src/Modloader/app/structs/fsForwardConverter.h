#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsForwardConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsForwardConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsForwardConverter_DEFINED)
#include <Modloader/app/structs/fsForwardConverter__Fields.h>
#if defined(IL2CPP_STRUCT_fsForwardConverter__Fields_DEFINED)
#define IL2CPP_STRUCT_fsForwardConverter_DEFINED
struct fsForwardConverter__Class;
struct fsForwardConverter {
    struct fsForwardConverter__Class* klass;
    MonitorData* monitor;
    struct fsForwardConverter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_fsForwardConverter_FWDDECL)
#define IL2CPP_STRUCT_fsForwardConverter_FWDDECL
#include <Modloader/app/structs/fsForwardConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_fsForwardConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsForwardConverter_DEFINED) && !defined(IL2CPP_STRUCT_fsForwardConverter_FWDDECL)
#include <Modloader/app/structs/fsForwardConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsForwardConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
