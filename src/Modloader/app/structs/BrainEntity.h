#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BrainEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BrainEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrainEntity_DEFINED)
#include <Modloader/app/structs/BrainEntity__Fields.h>
#if defined(IL2CPP_STRUCT_BrainEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_BrainEntity_DEFINED
struct BrainEntity__Class;
struct BrainEntity {
    struct BrainEntity__Class* klass;
    MonitorData* monitor;
    struct BrainEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BrainEntity_FWDDECL)
#define IL2CPP_STRUCT_BrainEntity_FWDDECL
#include <Modloader/app/structs/BrainEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_BrainEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrainEntity_DEFINED) && !defined(IL2CPP_STRUCT_BrainEntity_FWDDECL)
#include <Modloader/app/structs/BrainEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BrainEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
