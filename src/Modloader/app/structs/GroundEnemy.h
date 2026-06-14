#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroundEnemy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroundEnemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundEnemy_DEFINED)
#include <Modloader/app/structs/GroundEnemy__Fields.h>
#if defined(IL2CPP_STRUCT_GroundEnemy__Fields_DEFINED)
#define IL2CPP_STRUCT_GroundEnemy_DEFINED
struct GroundEnemy__Class;
struct GroundEnemy {
    struct GroundEnemy__Class* klass;
    MonitorData* monitor;
    struct GroundEnemy__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroundEnemy_FWDDECL)
#define IL2CPP_STRUCT_GroundEnemy_FWDDECL
#include <Modloader/app/structs/GroundEnemy__Class.h>
#endif
#undef IL2CPP_STRUCT_GroundEnemy_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundEnemy_DEFINED) && !defined(IL2CPP_STRUCT_GroundEnemy_FWDDECL)
#include <Modloader/app/structs/GroundEnemy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroundEnemy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
