#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkeetoEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkeetoEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoEntity_DEFINED)
#include <Modloader/app/structs/SkeetoEntity__Fields.h>
#if defined(IL2CPP_STRUCT_SkeetoEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_SkeetoEntity_DEFINED
struct SkeetoEntity__Class;
struct SkeetoEntity {
    struct SkeetoEntity__Class* klass;
    MonitorData* monitor;
    struct SkeetoEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkeetoEntity_FWDDECL)
#define IL2CPP_STRUCT_SkeetoEntity_FWDDECL
#include <Modloader/app/structs/SkeetoEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_SkeetoEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoEntity_DEFINED) && !defined(IL2CPP_STRUCT_SkeetoEntity_FWDDECL)
#include <Modloader/app/structs/SkeetoEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkeetoEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
