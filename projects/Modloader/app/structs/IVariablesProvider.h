#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IVariablesProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IVariablesProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVariablesProvider_DEFINED)
#define IL2CPP_STRUCT_IVariablesProvider_DEFINED
struct IVariablesProvider__Class;
struct IVariablesProvider {
    struct IVariablesProvider__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IVariablesProvider_FWDDECL)
#define IL2CPP_STRUCT_IVariablesProvider_FWDDECL
#include <Modloader/app/structs/IVariablesProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_IVariablesProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVariablesProvider_DEFINED) && !defined(IL2CPP_STRUCT_IVariablesProvider_FWDDECL)
#include <Modloader/app/structs/IVariablesProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IVariablesProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
