#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MinerNPCPlaceholder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MinerNPCPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerNPCPlaceholder_DEFINED)
#include <Modloader/app/structs/MinerNPCPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_MinerNPCPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_MinerNPCPlaceholder_DEFINED
struct MinerNPCPlaceholder__Class;
struct MinerNPCPlaceholder {
    struct MinerNPCPlaceholder__Class* klass;
    MonitorData* monitor;
    struct MinerNPCPlaceholder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MinerNPCPlaceholder_FWDDECL)
#define IL2CPP_STRUCT_MinerNPCPlaceholder_FWDDECL
#include <Modloader/app/structs/MinerNPCPlaceholder__Class.h>
#endif
#undef IL2CPP_STRUCT_MinerNPCPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerNPCPlaceholder_DEFINED) && !defined(IL2CPP_STRUCT_MinerNPCPlaceholder_FWDDECL)
#include <Modloader/app/structs/MinerNPCPlaceholder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MinerNPCPlaceholder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
