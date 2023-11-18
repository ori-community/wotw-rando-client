#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeLibImportClassAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeLibImportClassAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeLibImportClassAttribute_DEFINED)
#include <Modloader/app/structs/TypeLibImportClassAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_TypeLibImportClassAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_TypeLibImportClassAttribute_DEFINED
struct TypeLibImportClassAttribute__Class;
struct TypeLibImportClassAttribute {
    struct TypeLibImportClassAttribute__Class* klass;
    MonitorData* monitor;
    struct TypeLibImportClassAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TypeLibImportClassAttribute_FWDDECL)
#define IL2CPP_STRUCT_TypeLibImportClassAttribute_FWDDECL
#include <Modloader/app/structs/TypeLibImportClassAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_TypeLibImportClassAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeLibImportClassAttribute_DEFINED) && !defined(IL2CPP_STRUCT_TypeLibImportClassAttribute_FWDDECL)
#include <Modloader/app/structs/TypeLibImportClassAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeLibImportClassAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
