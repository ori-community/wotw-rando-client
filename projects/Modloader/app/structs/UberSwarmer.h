#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberSwarmer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberSwarmer_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberSwarmer_DEFINED)
#include <Modloader/app/structs/UberSwarmer__Fields.h>
#if defined(IL2CPP_STRUCT_UberSwarmer__Fields_DEFINED)
#define IL2CPP_STRUCT_UberSwarmer_DEFINED
struct UberSwarmer__Class;
struct UberSwarmer {
    struct UberSwarmer__Class* klass;
    MonitorData* monitor;
    struct UberSwarmer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberSwarmer_FWDDECL)
#define IL2CPP_STRUCT_UberSwarmer_FWDDECL
#include <Modloader/app/structs/UberSwarmer__Class.h>
#endif
#undef IL2CPP_STRUCT_UberSwarmer_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberSwarmer_DEFINED) && !defined(IL2CPP_STRUCT_UberSwarmer_FWDDECL)
#include <Modloader/app/structs/UberSwarmer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberSwarmer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
