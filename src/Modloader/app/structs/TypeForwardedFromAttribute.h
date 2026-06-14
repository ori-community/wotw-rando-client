#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeForwardedFromAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeForwardedFromAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeForwardedFromAttribute_DEFINED)
#include <Modloader/app/structs/TypeForwardedFromAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_TypeForwardedFromAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_TypeForwardedFromAttribute_DEFINED
struct TypeForwardedFromAttribute__Class;
struct TypeForwardedFromAttribute {
    struct TypeForwardedFromAttribute__Class* klass;
    MonitorData* monitor;
    struct TypeForwardedFromAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TypeForwardedFromAttribute_FWDDECL)
#define IL2CPP_STRUCT_TypeForwardedFromAttribute_FWDDECL
#include <Modloader/app/structs/TypeForwardedFromAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_TypeForwardedFromAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeForwardedFromAttribute_DEFINED) && !defined(IL2CPP_STRUCT_TypeForwardedFromAttribute_FWDDECL)
#include <Modloader/app/structs/TypeForwardedFromAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeForwardedFromAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
