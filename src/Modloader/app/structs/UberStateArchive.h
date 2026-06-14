#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateArchive_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateArchive_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateArchive_DEFINED)
#include <Modloader/app/structs/UberStateArchive__Fields.h>
#if defined(IL2CPP_STRUCT_UberStateArchive__Fields_DEFINED)
#define IL2CPP_STRUCT_UberStateArchive_DEFINED
struct UberStateArchive__Class;
struct UberStateArchive {
    struct UberStateArchive__Class* klass;
    MonitorData* monitor;
    struct UberStateArchive__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberStateArchive_FWDDECL)
#define IL2CPP_STRUCT_UberStateArchive_FWDDECL
#include <Modloader/app/structs/UberStateArchive__Class.h>
#endif
#undef IL2CPP_STRUCT_UberStateArchive_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateArchive_DEFINED) && !defined(IL2CPP_STRUCT_UberStateArchive_FWDDECL)
#include <Modloader/app/structs/UberStateArchive.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateArchive.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
