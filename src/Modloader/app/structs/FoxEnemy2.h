#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FoxEnemy2_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FoxEnemy2_INITIALIZING
#if !defined(IL2CPP_STRUCT_FoxEnemy2_DEFINED)
#include <Modloader/app/structs/FoxEnemy2__Fields.h>
#if defined(IL2CPP_STRUCT_FoxEnemy2__Fields_DEFINED)
#define IL2CPP_STRUCT_FoxEnemy2_DEFINED
struct FoxEnemy2__Class;
struct FoxEnemy2 {
    struct FoxEnemy2__Class* klass;
    MonitorData* monitor;
    struct FoxEnemy2__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FoxEnemy2_FWDDECL)
#define IL2CPP_STRUCT_FoxEnemy2_FWDDECL
#include <Modloader/app/structs/FoxEnemy2__Class.h>
#endif
#undef IL2CPP_STRUCT_FoxEnemy2_INITIALIZING
#if !defined(IL2CPP_STRUCT_FoxEnemy2_DEFINED) && !defined(IL2CPP_STRUCT_FoxEnemy2_FWDDECL)
#include <Modloader/app/structs/FoxEnemy2.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FoxEnemy2.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
