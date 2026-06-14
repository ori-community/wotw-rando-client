#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MinerNPCEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MinerNPCEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerNPCEntity_DEFINED)
#include <Modloader/app/structs/MinerNPCEntity__Fields.h>
#if defined(IL2CPP_STRUCT_MinerNPCEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_MinerNPCEntity_DEFINED
struct MinerNPCEntity__Class;
struct MinerNPCEntity {
    struct MinerNPCEntity__Class* klass;
    MonitorData* monitor;
    struct MinerNPCEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MinerNPCEntity_FWDDECL)
#define IL2CPP_STRUCT_MinerNPCEntity_FWDDECL
#include <Modloader/app/structs/MinerNPCEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_MinerNPCEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerNPCEntity_DEFINED) && !defined(IL2CPP_STRUCT_MinerNPCEntity_FWDDECL)
#include <Modloader/app/structs/MinerNPCEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MinerNPCEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
