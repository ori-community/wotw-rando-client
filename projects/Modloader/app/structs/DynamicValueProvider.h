#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicValueProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicValueProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicValueProvider_DEFINED)
#include <Modloader/app/structs/DynamicValueProvider__Fields.h>
#if defined(IL2CPP_STRUCT_DynamicValueProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_DynamicValueProvider_DEFINED
struct DynamicValueProvider__Class;
struct DynamicValueProvider {
    struct DynamicValueProvider__Class* klass;
    MonitorData* monitor;
    struct DynamicValueProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DynamicValueProvider_FWDDECL)
#define IL2CPP_STRUCT_DynamicValueProvider_FWDDECL
#include <Modloader/app/structs/DynamicValueProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_DynamicValueProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicValueProvider_DEFINED) && !defined(IL2CPP_STRUCT_DynamicValueProvider_FWDDECL)
#include <Modloader/app/structs/DynamicValueProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicValueProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
