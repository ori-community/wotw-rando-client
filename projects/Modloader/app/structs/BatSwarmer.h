#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BatSwarmer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BatSwarmer_INITIALIZING
#if !defined(IL2CPP_STRUCT_BatSwarmer_DEFINED)
#include <Modloader/app/structs/BatSwarmer__Fields.h>
#if defined(IL2CPP_STRUCT_BatSwarmer__Fields_DEFINED)
#define IL2CPP_STRUCT_BatSwarmer_DEFINED
struct BatSwarmer__Class;
struct BatSwarmer {
    struct BatSwarmer__Class* klass;
    MonitorData* monitor;
    struct BatSwarmer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BatSwarmer_FWDDECL)
#define IL2CPP_STRUCT_BatSwarmer_FWDDECL
#include <Modloader/app/structs/BatSwarmer__Class.h>
#endif
#undef IL2CPP_STRUCT_BatSwarmer_INITIALIZING
#if !defined(IL2CPP_STRUCT_BatSwarmer_DEFINED) && !defined(IL2CPP_STRUCT_BatSwarmer_FWDDECL)
#include <Modloader/app/structs/BatSwarmer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BatSwarmer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
