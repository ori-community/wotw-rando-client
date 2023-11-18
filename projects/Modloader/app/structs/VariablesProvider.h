#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VariablesProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VariablesProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_VariablesProvider_DEFINED)
#include <Modloader/app/structs/VariablesProvider__Fields.h>
#if defined(IL2CPP_STRUCT_VariablesProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_VariablesProvider_DEFINED
struct VariablesProvider__Class;
struct VariablesProvider {
    struct VariablesProvider__Class* klass;
    MonitorData* monitor;
    struct VariablesProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VariablesProvider_FWDDECL)
#define IL2CPP_STRUCT_VariablesProvider_FWDDECL
#include <Modloader/app/structs/VariablesProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_VariablesProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_VariablesProvider_DEFINED) && !defined(IL2CPP_STRUCT_VariablesProvider_FWDDECL)
#include <Modloader/app/structs/VariablesProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VariablesProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
