#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IArgumentProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IArgumentProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IArgumentProvider_DEFINED)
#define IL2CPP_STRUCT_IArgumentProvider_DEFINED
struct IArgumentProvider__Class;
struct IArgumentProvider {
    struct IArgumentProvider__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IArgumentProvider_FWDDECL)
#define IL2CPP_STRUCT_IArgumentProvider_FWDDECL
#include <Modloader/app/structs/IArgumentProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_IArgumentProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IArgumentProvider_DEFINED) && !defined(IL2CPP_STRUCT_IArgumentProvider_FWDDECL)
#include <Modloader/app/structs/IArgumentProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IArgumentProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
