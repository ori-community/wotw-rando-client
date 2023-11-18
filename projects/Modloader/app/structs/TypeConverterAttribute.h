#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeConverterAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeConverterAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeConverterAttribute_DEFINED)
#include <Modloader/app/structs/TypeConverterAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_TypeConverterAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_TypeConverterAttribute_DEFINED
struct TypeConverterAttribute__Class;
struct TypeConverterAttribute {
    struct TypeConverterAttribute__Class* klass;
    MonitorData* monitor;
    struct TypeConverterAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TypeConverterAttribute_FWDDECL)
#define IL2CPP_STRUCT_TypeConverterAttribute_FWDDECL
#include <Modloader/app/structs/TypeConverterAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_TypeConverterAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeConverterAttribute_DEFINED) && !defined(IL2CPP_STRUCT_TypeConverterAttribute_FWDDECL)
#include <Modloader/app/structs/TypeConverterAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeConverterAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
