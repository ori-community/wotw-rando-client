#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstanciationToggler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstanciationToggler_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstanciationToggler_DEFINED)
#include <Modloader/app/structs/InstanciationToggler__Fields.h>
#if defined(IL2CPP_STRUCT_InstanciationToggler__Fields_DEFINED)
#define IL2CPP_STRUCT_InstanciationToggler_DEFINED
struct InstanciationToggler__Class;
struct InstanciationToggler {
    struct InstanciationToggler__Class* klass;
    MonitorData* monitor;
    struct InstanciationToggler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InstanciationToggler_FWDDECL)
#define IL2CPP_STRUCT_InstanciationToggler_FWDDECL
#include <Modloader/app/structs/InstanciationToggler__Class.h>
#endif
#undef IL2CPP_STRUCT_InstanciationToggler_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstanciationToggler_DEFINED) && !defined(IL2CPP_STRUCT_InstanciationToggler_FWDDECL)
#include <Modloader/app/structs/InstanciationToggler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstanciationToggler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
