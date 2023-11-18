#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CSharpCodeProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CSharpCodeProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_CSharpCodeProvider_DEFINED)
#define IL2CPP_STRUCT_CSharpCodeProvider_DEFINED
struct CSharpCodeProvider__Class;
struct CSharpCodeProvider {
    struct CSharpCodeProvider__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CSharpCodeProvider_FWDDECL)
#define IL2CPP_STRUCT_CSharpCodeProvider_FWDDECL
#include <Modloader/app/structs/CSharpCodeProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_CSharpCodeProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_CSharpCodeProvider_DEFINED) && !defined(IL2CPP_STRUCT_CSharpCodeProvider_FWDDECL)
#include <Modloader/app/structs/CSharpCodeProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CSharpCodeProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
