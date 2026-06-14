#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsArrayConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsArrayConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsArrayConverter_DEFINED)
#include <Modloader/app/structs/fsArrayConverter__Fields.h>
#if defined(IL2CPP_STRUCT_fsArrayConverter__Fields_DEFINED)
#define IL2CPP_STRUCT_fsArrayConverter_DEFINED
struct fsArrayConverter__Class;
struct fsArrayConverter {
    struct fsArrayConverter__Class* klass;
    MonitorData* monitor;
    struct fsArrayConverter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_fsArrayConverter_FWDDECL)
#define IL2CPP_STRUCT_fsArrayConverter_FWDDECL
#include <Modloader/app/structs/fsArrayConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_fsArrayConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsArrayConverter_DEFINED) && !defined(IL2CPP_STRUCT_fsArrayConverter_FWDDECL)
#include <Modloader/app/structs/fsArrayConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsArrayConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
