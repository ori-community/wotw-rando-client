#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeDescriptionProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeDescriptionProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeDescriptionProvider_DEFINED)
#include <Modloader/app/structs/TypeDescriptionProvider__Fields.h>
#if defined(IL2CPP_STRUCT_TypeDescriptionProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_TypeDescriptionProvider_DEFINED
struct TypeDescriptionProvider__Class;
struct TypeDescriptionProvider {
    struct TypeDescriptionProvider__Class* klass;
    MonitorData* monitor;
    struct TypeDescriptionProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TypeDescriptionProvider_FWDDECL)
#define IL2CPP_STRUCT_TypeDescriptionProvider_FWDDECL
#include <Modloader/app/structs/TypeDescriptionProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_TypeDescriptionProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeDescriptionProvider_DEFINED) && !defined(IL2CPP_STRUCT_TypeDescriptionProvider_FWDDECL)
#include <Modloader/app/structs/TypeDescriptionProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeDescriptionProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
