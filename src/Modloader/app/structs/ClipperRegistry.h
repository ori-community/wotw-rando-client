#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClipperRegistry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClipperRegistry_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClipperRegistry_DEFINED)
#include <Modloader/app/structs/ClipperRegistry__Fields.h>
#if defined(IL2CPP_STRUCT_ClipperRegistry__Fields_DEFINED)
#define IL2CPP_STRUCT_ClipperRegistry_DEFINED
struct ClipperRegistry__Class;
struct ClipperRegistry {
    struct ClipperRegistry__Class* klass;
    MonitorData* monitor;
    struct ClipperRegistry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ClipperRegistry_FWDDECL)
#define IL2CPP_STRUCT_ClipperRegistry_FWDDECL
#include <Modloader/app/structs/ClipperRegistry__Class.h>
#endif
#undef IL2CPP_STRUCT_ClipperRegistry_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClipperRegistry_DEFINED) && !defined(IL2CPP_STRUCT_ClipperRegistry_FWDDECL)
#include <Modloader/app/structs/ClipperRegistry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClipperRegistry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
