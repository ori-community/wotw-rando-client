#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnemyStopper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnemyStopper_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyStopper_DEFINED)
#include <Modloader/app/structs/EnemyStopper__Fields.h>
#if defined(IL2CPP_STRUCT_EnemyStopper__Fields_DEFINED)
#define IL2CPP_STRUCT_EnemyStopper_DEFINED
struct EnemyStopper__Class;
struct EnemyStopper {
    struct EnemyStopper__Class* klass;
    MonitorData* monitor;
    struct EnemyStopper__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnemyStopper_FWDDECL)
#define IL2CPP_STRUCT_EnemyStopper_FWDDECL
#include <Modloader/app/structs/EnemyStopper__Class.h>
#endif
#undef IL2CPP_STRUCT_EnemyStopper_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyStopper_DEFINED) && !defined(IL2CPP_STRUCT_EnemyStopper_FWDDECL)
#include <Modloader/app/structs/EnemyStopper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnemyStopper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
