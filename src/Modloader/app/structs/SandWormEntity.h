#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SandWormEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SandWormEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormEntity_DEFINED)
#include <Modloader/app/structs/SandWormEntity__Fields.h>
#if defined(IL2CPP_STRUCT_SandWormEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_SandWormEntity_DEFINED
struct SandWormEntity__Class;
struct SandWormEntity {
    struct SandWormEntity__Class* klass;
    MonitorData* monitor;
    struct SandWormEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SandWormEntity_FWDDECL)
#define IL2CPP_STRUCT_SandWormEntity_FWDDECL
#include <Modloader/app/structs/SandWormEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_SandWormEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormEntity_DEFINED) && !defined(IL2CPP_STRUCT_SandWormEntity_FWDDECL)
#include <Modloader/app/structs/SandWormEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SandWormEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
