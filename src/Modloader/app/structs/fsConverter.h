#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsConverter_DEFINED)
#include <Modloader/app/structs/fsConverter__Fields.h>
#if defined(IL2CPP_STRUCT_fsConverter__Fields_DEFINED)
#define IL2CPP_STRUCT_fsConverter_DEFINED
struct fsConverter__Class;
struct fsConverter {
    struct fsConverter__Class* klass;
    MonitorData* monitor;
    struct fsConverter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_fsConverter_FWDDECL)
#define IL2CPP_STRUCT_fsConverter_FWDDECL
#include <Modloader/app/structs/fsConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_fsConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsConverter_DEFINED) && !defined(IL2CPP_STRUCT_fsConverter_FWDDECL)
#include <Modloader/app/structs/fsConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
