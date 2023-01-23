#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsBaseConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsBaseConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsBaseConverter_DEFINED)
#include <Modloader/app/structs/fsBaseConverter__Fields.h>
#if defined(IL2CPP_STRUCT_fsBaseConverter__Fields_DEFINED)
#define IL2CPP_STRUCT_fsBaseConverter_DEFINED
struct fsBaseConverter__Class;
struct fsBaseConverter {
    struct fsBaseConverter__Class* klass;
    MonitorData* monitor;
    struct fsBaseConverter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_fsBaseConverter_FWDDECL)
#define IL2CPP_STRUCT_fsBaseConverter_FWDDECL
#include <Modloader/app/structs/fsBaseConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_fsBaseConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsBaseConverter_DEFINED) && !defined(IL2CPP_STRUCT_fsBaseConverter_FWDDECL)
#include <Modloader/app/structs/fsBaseConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsBaseConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
