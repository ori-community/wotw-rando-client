#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReflectTypeDescriptionProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReflectTypeDescriptionProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectTypeDescriptionProvider__Fields_DEFINED)
#include <Modloader/app/structs/TypeDescriptionProvider__Fields.h>
#if defined(IL2CPP_STRUCT_TypeDescriptionProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_ReflectTypeDescriptionProvider__Fields_DEFINED
struct Hashtable;
struct ReflectTypeDescriptionProvider__Fields {
    struct TypeDescriptionProvider__Fields _;
    struct Hashtable* _typeData;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReflectTypeDescriptionProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_ReflectTypeDescriptionProvider__Fields_FWDDECL
#include <Modloader/app/structs/Hashtable.h>
#endif
#undef IL2CPP_STRUCT_ReflectTypeDescriptionProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectTypeDescriptionProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ReflectTypeDescriptionProvider__Fields_FWDDECL)
#include <Modloader/app/structs/ReflectTypeDescriptionProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReflectTypeDescriptionProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
