#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IAttributeProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IAttributeProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAttributeProvider_DEFINED)
#define IL2CPP_STRUCT_IAttributeProvider_DEFINED
struct IAttributeProvider__Class;
struct IAttributeProvider {
    struct IAttributeProvider__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IAttributeProvider_FWDDECL)
#define IL2CPP_STRUCT_IAttributeProvider_FWDDECL
#include <Modloader/app/structs/IAttributeProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_IAttributeProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAttributeProvider_DEFINED) && !defined(IL2CPP_STRUCT_IAttributeProvider_FWDDECL)
#include <Modloader/app/structs/IAttributeProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IAttributeProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
