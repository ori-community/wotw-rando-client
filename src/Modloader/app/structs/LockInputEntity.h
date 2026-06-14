#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LockInputEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LockInputEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_LockInputEntity_DEFINED)
#include <Modloader/app/structs/LockInputEntity__Fields.h>
#if defined(IL2CPP_STRUCT_LockInputEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_LockInputEntity_DEFINED
struct LockInputEntity__Class;
struct LockInputEntity {
    struct LockInputEntity__Class* klass;
    MonitorData* monitor;
    struct LockInputEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LockInputEntity_FWDDECL)
#define IL2CPP_STRUCT_LockInputEntity_FWDDECL
#include <Modloader/app/structs/LockInputEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_LockInputEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_LockInputEntity_DEFINED) && !defined(IL2CPP_STRUCT_LockInputEntity_FWDDECL)
#include <Modloader/app/structs/LockInputEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LockInputEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
