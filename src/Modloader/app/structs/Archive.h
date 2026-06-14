#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Archive_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Archive_INITIALIZING
#if !defined(IL2CPP_STRUCT_Archive_DEFINED)
#include <Modloader/app/structs/Archive__Fields.h>
#if defined(IL2CPP_STRUCT_Archive__Fields_DEFINED)
#define IL2CPP_STRUCT_Archive_DEFINED
struct Archive__Class;
struct Archive {
    struct Archive__Class* klass;
    MonitorData* monitor;
    struct Archive__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Archive_FWDDECL)
#define IL2CPP_STRUCT_Archive_FWDDECL
#include <Modloader/app/structs/Archive__Class.h>
#endif
#undef IL2CPP_STRUCT_Archive_INITIALIZING
#if !defined(IL2CPP_STRUCT_Archive_DEFINED) && !defined(IL2CPP_STRUCT_Archive_FWDDECL)
#include <Modloader/app/structs/Archive.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Archive.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
