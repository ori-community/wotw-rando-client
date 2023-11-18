#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Checkpoint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Checkpoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_Checkpoint_DEFINED)
#include <Modloader/app/structs/Checkpoint__Fields.h>
#if defined(IL2CPP_STRUCT_Checkpoint__Fields_DEFINED)
#define IL2CPP_STRUCT_Checkpoint_DEFINED
struct Checkpoint__Class;
struct Checkpoint {
    struct Checkpoint__Class* klass;
    MonitorData* monitor;
    struct Checkpoint__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Checkpoint_FWDDECL)
#define IL2CPP_STRUCT_Checkpoint_FWDDECL
#include <Modloader/app/structs/Checkpoint__Class.h>
#endif
#undef IL2CPP_STRUCT_Checkpoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_Checkpoint_DEFINED) && !defined(IL2CPP_STRUCT_Checkpoint_FWDDECL)
#include <Modloader/app/structs/Checkpoint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Checkpoint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
