#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkeetoNestEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkeetoNestEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoNestEntity_DEFINED)
#include <Modloader/app/structs/SkeetoNestEntity__Fields.h>
#if defined(IL2CPP_STRUCT_SkeetoNestEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_SkeetoNestEntity_DEFINED
struct SkeetoNestEntity__Class;
struct SkeetoNestEntity {
    struct SkeetoNestEntity__Class* klass;
    MonitorData* monitor;
    struct SkeetoNestEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkeetoNestEntity_FWDDECL)
#define IL2CPP_STRUCT_SkeetoNestEntity_FWDDECL
#include <Modloader/app/structs/SkeetoNestEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_SkeetoNestEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoNestEntity_DEFINED) && !defined(IL2CPP_STRUCT_SkeetoNestEntity_FWDDECL)
#include <Modloader/app/structs/SkeetoNestEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkeetoNestEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
