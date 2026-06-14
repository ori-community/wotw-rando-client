#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ControllerSchemeOptions_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ControllerSchemeOptions_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControllerSchemeOptions_DEFINED)
#include <Modloader/app/structs/ControllerSchemeOptions__Fields.h>
#if defined(IL2CPP_STRUCT_ControllerSchemeOptions__Fields_DEFINED)
#define IL2CPP_STRUCT_ControllerSchemeOptions_DEFINED
struct ControllerSchemeOptions__Class;
struct ControllerSchemeOptions {
    struct ControllerSchemeOptions__Class* klass;
    MonitorData* monitor;
    struct ControllerSchemeOptions__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ControllerSchemeOptions_FWDDECL)
#define IL2CPP_STRUCT_ControllerSchemeOptions_FWDDECL
#include <Modloader/app/structs/ControllerSchemeOptions__Class.h>
#endif
#undef IL2CPP_STRUCT_ControllerSchemeOptions_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControllerSchemeOptions_DEFINED) && !defined(IL2CPP_STRUCT_ControllerSchemeOptions_FWDDECL)
#include <Modloader/app/structs/ControllerSchemeOptions.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ControllerSchemeOptions.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
