#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReflectionDelegateFactory_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReflectionDelegateFactory_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectionDelegateFactory_DEFINED)
#define IL2CPP_STRUCT_ReflectionDelegateFactory_DEFINED
struct ReflectionDelegateFactory__Class;
struct ReflectionDelegateFactory {
    struct ReflectionDelegateFactory__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ReflectionDelegateFactory_FWDDECL)
#define IL2CPP_STRUCT_ReflectionDelegateFactory_FWDDECL
#include <Modloader/app/structs/ReflectionDelegateFactory__Class.h>
#endif
#undef IL2CPP_STRUCT_ReflectionDelegateFactory_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectionDelegateFactory_DEFINED) && !defined(IL2CPP_STRUCT_ReflectionDelegateFactory_FWDDECL)
#include <Modloader/app/structs/ReflectionDelegateFactory.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReflectionDelegateFactory.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
