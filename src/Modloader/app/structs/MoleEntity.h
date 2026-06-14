#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoleEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoleEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoleEntity_DEFINED)
#include <Modloader/app/structs/MoleEntity__Fields.h>
#if defined(IL2CPP_STRUCT_MoleEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_MoleEntity_DEFINED
struct MoleEntity__Class;
struct MoleEntity {
    struct MoleEntity__Class* klass;
    MonitorData* monitor;
    struct MoleEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoleEntity_FWDDECL)
#define IL2CPP_STRUCT_MoleEntity_FWDDECL
#include <Modloader/app/structs/MoleEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_MoleEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoleEntity_DEFINED) && !defined(IL2CPP_STRUCT_MoleEntity_FWDDECL)
#include <Modloader/app/structs/MoleEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoleEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
