#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShoulderRotator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShoulderRotator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShoulderRotator_DEFINED)
#include <Modloader/app/structs/ShoulderRotator__Fields.h>
#if defined(IL2CPP_STRUCT_ShoulderRotator__Fields_DEFINED)
#define IL2CPP_STRUCT_ShoulderRotator_DEFINED
struct ShoulderRotator__Class;
struct ShoulderRotator {
    struct ShoulderRotator__Class* klass;
    MonitorData* monitor;
    struct ShoulderRotator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShoulderRotator_FWDDECL)
#define IL2CPP_STRUCT_ShoulderRotator_FWDDECL
#include <Modloader/app/structs/ShoulderRotator__Class.h>
#endif
#undef IL2CPP_STRUCT_ShoulderRotator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShoulderRotator_DEFINED) && !defined(IL2CPP_STRUCT_ShoulderRotator_FWDDECL)
#include <Modloader/app/structs/ShoulderRotator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShoulderRotator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
