#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MothSwarmer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MothSwarmer_INITIALIZING
#if !defined(IL2CPP_STRUCT_MothSwarmer_DEFINED)
#include <Modloader/app/structs/MothSwarmer__Fields.h>
#if defined(IL2CPP_STRUCT_MothSwarmer__Fields_DEFINED)
#define IL2CPP_STRUCT_MothSwarmer_DEFINED
struct MothSwarmer__Class;
struct MothSwarmer {
    struct MothSwarmer__Class* klass;
    MonitorData* monitor;
    struct MothSwarmer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MothSwarmer_FWDDECL)
#define IL2CPP_STRUCT_MothSwarmer_FWDDECL
#include <Modloader/app/structs/MothSwarmer__Class.h>
#endif
#undef IL2CPP_STRUCT_MothSwarmer_INITIALIZING
#if !defined(IL2CPP_STRUCT_MothSwarmer_DEFINED) && !defined(IL2CPP_STRUCT_MothSwarmer_FWDDECL)
#include <Modloader/app/structs/MothSwarmer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MothSwarmer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
