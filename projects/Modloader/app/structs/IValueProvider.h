#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IValueProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IValueProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IValueProvider_DEFINED)
#define IL2CPP_STRUCT_IValueProvider_DEFINED
struct IValueProvider__Class;
struct IValueProvider {
    struct IValueProvider__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IValueProvider_FWDDECL)
#define IL2CPP_STRUCT_IValueProvider_FWDDECL
#include <Modloader/app/structs/IValueProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_IValueProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IValueProvider_DEFINED) && !defined(IL2CPP_STRUCT_IValueProvider_FWDDECL)
#include <Modloader/app/structs/IValueProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IValueProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
