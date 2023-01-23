#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeLibVersionAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeLibVersionAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeLibVersionAttribute_DEFINED)
#include <Modloader/app/structs/TypeLibVersionAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_TypeLibVersionAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_TypeLibVersionAttribute_DEFINED
struct TypeLibVersionAttribute__Class;
struct TypeLibVersionAttribute {
    struct TypeLibVersionAttribute__Class* klass;
    MonitorData* monitor;
    struct TypeLibVersionAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TypeLibVersionAttribute_FWDDECL)
#define IL2CPP_STRUCT_TypeLibVersionAttribute_FWDDECL
#include <Modloader/app/structs/TypeLibVersionAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_TypeLibVersionAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeLibVersionAttribute_DEFINED) && !defined(IL2CPP_STRUCT_TypeLibVersionAttribute_FWDDECL)
#include <Modloader/app/structs/TypeLibVersionAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeLibVersionAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
