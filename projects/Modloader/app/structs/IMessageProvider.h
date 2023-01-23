#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IMessageProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IMessageProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMessageProvider_DEFINED)
#define IL2CPP_STRUCT_IMessageProvider_DEFINED
struct IMessageProvider__Class;
struct IMessageProvider {
    struct IMessageProvider__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IMessageProvider_FWDDECL)
#define IL2CPP_STRUCT_IMessageProvider_FWDDECL
#include <Modloader/app/structs/IMessageProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_IMessageProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMessageProvider_DEFINED) && !defined(IL2CPP_STRUCT_IMessageProvider_FWDDECL)
#include <Modloader/app/structs/IMessageProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IMessageProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
