#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NPCEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NPCEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_NPCEntity_DEFINED)
#include <Modloader/app/structs/NPCEntity__Fields.h>
#if defined(IL2CPP_STRUCT_NPCEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_NPCEntity_DEFINED
struct NPCEntity__Class;
struct NPCEntity {
    struct NPCEntity__Class* klass;
    MonitorData* monitor;
    struct NPCEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NPCEntity_FWDDECL)
#define IL2CPP_STRUCT_NPCEntity_FWDDECL
#include <Modloader/app/structs/NPCEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_NPCEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_NPCEntity_DEFINED) && !defined(IL2CPP_STRUCT_NPCEntity_FWDDECL)
#include <Modloader/app/structs/NPCEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NPCEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
