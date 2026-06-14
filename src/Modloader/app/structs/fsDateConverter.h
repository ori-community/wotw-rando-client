#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsDateConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsDateConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsDateConverter_DEFINED)
#include <Modloader/app/structs/fsDateConverter__Fields.h>
#if defined(IL2CPP_STRUCT_fsDateConverter__Fields_DEFINED)
#define IL2CPP_STRUCT_fsDateConverter_DEFINED
struct fsDateConverter__Class;
struct fsDateConverter {
    struct fsDateConverter__Class* klass;
    MonitorData* monitor;
    struct fsDateConverter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_fsDateConverter_FWDDECL)
#define IL2CPP_STRUCT_fsDateConverter_FWDDECL
#include <Modloader/app/structs/fsDateConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_fsDateConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsDateConverter_DEFINED) && !defined(IL2CPP_STRUCT_fsDateConverter_FWDDECL)
#include <Modloader/app/structs/fsDateConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsDateConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
