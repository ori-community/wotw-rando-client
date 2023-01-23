#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Locomotion_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Locomotion_INITIALIZING
#if !defined(IL2CPP_STRUCT_Locomotion_DEFINED)
#include <Modloader/app/structs/Locomotion__Fields.h>
#if defined(IL2CPP_STRUCT_Locomotion__Fields_DEFINED)
#define IL2CPP_STRUCT_Locomotion_DEFINED
struct Locomotion__Class;
struct Locomotion {
    struct Locomotion__Class* klass;
    MonitorData* monitor;
    struct Locomotion__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Locomotion_FWDDECL)
#define IL2CPP_STRUCT_Locomotion_FWDDECL
#include <Modloader/app/structs/Locomotion__Class.h>
#endif
#undef IL2CPP_STRUCT_Locomotion_INITIALIZING
#if !defined(IL2CPP_STRUCT_Locomotion_DEFINED) && !defined(IL2CPP_STRUCT_Locomotion_FWDDECL)
#include <Modloader/app/structs/Locomotion.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Locomotion.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
