#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsSerializer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsSerializer_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsSerializer_DEFINED)
#include <Modloader/app/structs/fsSerializer__Fields.h>
#if defined(IL2CPP_STRUCT_fsSerializer__Fields_DEFINED)
#define IL2CPP_STRUCT_fsSerializer_DEFINED
struct fsSerializer__Class;
struct fsSerializer {
    struct fsSerializer__Class* klass;
    MonitorData* monitor;
    struct fsSerializer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_fsSerializer_FWDDECL)
#define IL2CPP_STRUCT_fsSerializer_FWDDECL
#include <Modloader/app/structs/fsSerializer__Class.h>
#endif
#undef IL2CPP_STRUCT_fsSerializer_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsSerializer_DEFINED) && !defined(IL2CPP_STRUCT_fsSerializer_FWDDECL)
#include <Modloader/app/structs/fsSerializer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsSerializer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
