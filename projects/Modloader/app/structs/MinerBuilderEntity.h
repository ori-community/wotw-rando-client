#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MinerBuilderEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MinerBuilderEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerBuilderEntity_DEFINED)
#include <Modloader/app/structs/MinerBuilderEntity__Fields.h>
#if defined(IL2CPP_STRUCT_MinerBuilderEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_MinerBuilderEntity_DEFINED
struct MinerBuilderEntity__Class;
struct MinerBuilderEntity {
    struct MinerBuilderEntity__Class* klass;
    MonitorData* monitor;
    struct MinerBuilderEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MinerBuilderEntity_FWDDECL)
#define IL2CPP_STRUCT_MinerBuilderEntity_FWDDECL
#include <Modloader/app/structs/MinerBuilderEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_MinerBuilderEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerBuilderEntity_DEFINED) && !defined(IL2CPP_STRUCT_MinerBuilderEntity_FWDDECL)
#include <Modloader/app/structs/MinerBuilderEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MinerBuilderEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
