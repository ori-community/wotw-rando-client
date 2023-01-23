#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MokiNPCEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MokiNPCEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_MokiNPCEntity_DEFINED)
#include <Modloader/app/structs/MokiNPCEntity__Fields.h>
#if defined(IL2CPP_STRUCT_MokiNPCEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_MokiNPCEntity_DEFINED
struct MokiNPCEntity__Class;
struct MokiNPCEntity {
    struct MokiNPCEntity__Class* klass;
    MonitorData* monitor;
    struct MokiNPCEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MokiNPCEntity_FWDDECL)
#define IL2CPP_STRUCT_MokiNPCEntity_FWDDECL
#include <Modloader/app/structs/MokiNPCEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_MokiNPCEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_MokiNPCEntity_DEFINED) && !defined(IL2CPP_STRUCT_MokiNPCEntity_FWDDECL)
#include <Modloader/app/structs/MokiNPCEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MokiNPCEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
