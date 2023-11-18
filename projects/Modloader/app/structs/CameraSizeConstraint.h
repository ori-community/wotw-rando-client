#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraSizeConstraint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraSizeConstraint_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraSizeConstraint_DEFINED)
#include <Modloader/app/structs/CameraSizeConstraint__Fields.h>
#if defined(IL2CPP_STRUCT_CameraSizeConstraint__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraSizeConstraint_DEFINED
struct CameraSizeConstraint__Class;
struct CameraSizeConstraint {
    struct CameraSizeConstraint__Class* klass;
    MonitorData* monitor;
    struct CameraSizeConstraint__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraSizeConstraint_FWDDECL)
#define IL2CPP_STRUCT_CameraSizeConstraint_FWDDECL
#include <Modloader/app/structs/CameraSizeConstraint__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraSizeConstraint_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraSizeConstraint_DEFINED) && !defined(IL2CPP_STRUCT_CameraSizeConstraint_FWDDECL)
#include <Modloader/app/structs/CameraSizeConstraint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraSizeConstraint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
