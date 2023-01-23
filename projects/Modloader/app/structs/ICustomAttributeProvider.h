#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ICustomAttributeProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ICustomAttributeProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICustomAttributeProvider_DEFINED)
#define IL2CPP_STRUCT_ICustomAttributeProvider_DEFINED
struct ICustomAttributeProvider__Class;
struct ICustomAttributeProvider {
    struct ICustomAttributeProvider__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ICustomAttributeProvider_FWDDECL)
#define IL2CPP_STRUCT_ICustomAttributeProvider_FWDDECL
#include <Modloader/app/structs/ICustomAttributeProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_ICustomAttributeProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICustomAttributeProvider_DEFINED) && !defined(IL2CPP_STRUCT_ICustomAttributeProvider_FWDDECL)
#include <Modloader/app/structs/ICustomAttributeProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ICustomAttributeProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
