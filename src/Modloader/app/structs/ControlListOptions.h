#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ControlListOptions_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ControlListOptions_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControlListOptions_DEFINED)
#include <Modloader/app/structs/ControlListOptions__Fields.h>
#if defined(IL2CPP_STRUCT_ControlListOptions__Fields_DEFINED)
#define IL2CPP_STRUCT_ControlListOptions_DEFINED
struct ControlListOptions__Class;
struct ControlListOptions {
    struct ControlListOptions__Class* klass;
    MonitorData* monitor;
    struct ControlListOptions__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ControlListOptions_FWDDECL)
#define IL2CPP_STRUCT_ControlListOptions_FWDDECL
#include <Modloader/app/structs/ControlListOptions__Class.h>
#endif
#undef IL2CPP_STRUCT_ControlListOptions_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControlListOptions_DEFINED) && !defined(IL2CPP_STRUCT_ControlListOptions_FWDDECL)
#include <Modloader/app/structs/ControlListOptions.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ControlListOptions.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
