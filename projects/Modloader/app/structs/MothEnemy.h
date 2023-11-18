#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MothEnemy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MothEnemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_MothEnemy_DEFINED)
#include <Modloader/app/structs/MothEnemy__Fields.h>
#if defined(IL2CPP_STRUCT_MothEnemy__Fields_DEFINED)
#define IL2CPP_STRUCT_MothEnemy_DEFINED
struct MothEnemy__Class;
struct MothEnemy {
    struct MothEnemy__Class* klass;
    MonitorData* monitor;
    struct MothEnemy__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MothEnemy_FWDDECL)
#define IL2CPP_STRUCT_MothEnemy_FWDDECL
#include <Modloader/app/structs/MothEnemy__Class.h>
#endif
#undef IL2CPP_STRUCT_MothEnemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_MothEnemy_DEFINED) && !defined(IL2CPP_STRUCT_MothEnemy_FWDDECL)
#include <Modloader/app/structs/MothEnemy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MothEnemy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
