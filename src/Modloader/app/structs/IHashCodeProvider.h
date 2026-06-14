#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IHashCodeProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IHashCodeProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IHashCodeProvider_DEFINED)
#define IL2CPP_STRUCT_IHashCodeProvider_DEFINED
struct IHashCodeProvider__Class;
struct IHashCodeProvider {
    struct IHashCodeProvider__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IHashCodeProvider_FWDDECL)
#define IL2CPP_STRUCT_IHashCodeProvider_FWDDECL
#include <Modloader/app/structs/IHashCodeProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_IHashCodeProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IHashCodeProvider_DEFINED) && !defined(IL2CPP_STRUCT_IHashCodeProvider_FWDDECL)
#include <Modloader/app/structs/IHashCodeProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IHashCodeProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
