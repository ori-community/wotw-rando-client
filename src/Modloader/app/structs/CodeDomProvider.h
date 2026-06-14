#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CodeDomProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CodeDomProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_CodeDomProvider_DEFINED)
#define IL2CPP_STRUCT_CodeDomProvider_DEFINED
struct CodeDomProvider__Class;
struct CodeDomProvider {
    struct CodeDomProvider__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CodeDomProvider_FWDDECL)
#define IL2CPP_STRUCT_CodeDomProvider_FWDDECL
#include <Modloader/app/structs/CodeDomProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_CodeDomProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_CodeDomProvider_DEFINED) && !defined(IL2CPP_STRUCT_CodeDomProvider_FWDDECL)
#include <Modloader/app/structs/CodeDomProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CodeDomProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
