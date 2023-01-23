#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MortarEmergeBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MortarEmergeBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarEmergeBehaviour_DEFINED)
#include <Modloader/app/structs/MortarEmergeBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MortarEmergeBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_MortarEmergeBehaviour_DEFINED
struct MortarEmergeBehaviour__Class;
struct MortarEmergeBehaviour {
    struct MortarEmergeBehaviour__Class* klass;
    MonitorData* monitor;
    struct MortarEmergeBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MortarEmergeBehaviour_FWDDECL)
#define IL2CPP_STRUCT_MortarEmergeBehaviour_FWDDECL
#include <Modloader/app/structs/MortarEmergeBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_MortarEmergeBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarEmergeBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_MortarEmergeBehaviour_FWDDECL)
#include <Modloader/app/structs/MortarEmergeBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MortarEmergeBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
