#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PropertyDescriptor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PropertyDescriptor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyDescriptor__Fields_DEFINED)
#include <Modloader/app/structs/MemberDescriptor__Fields.h>
#if defined(IL2CPP_STRUCT_MemberDescriptor__Fields_DEFINED)
#define IL2CPP_STRUCT_PropertyDescriptor__Fields_DEFINED
struct TypeConverter;
struct Hashtable;
struct Object__Array;
struct Type__Array;
struct PropertyDescriptor__Fields {
    struct MemberDescriptor__Fields _;
    struct TypeConverter* converter;
    struct Hashtable* valueChangedHandlers;
    struct Object__Array* editors;
    struct Type__Array* editorTypes;
    int32_t editorCount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PropertyDescriptor__Fields_FWDDECL)
#define IL2CPP_STRUCT_PropertyDescriptor__Fields_FWDDECL
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/TypeConverter.h>
#include <Modloader/app/structs/Type__Array.h>
#endif
#undef IL2CPP_STRUCT_PropertyDescriptor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyDescriptor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PropertyDescriptor__Fields_FWDDECL)
#include <Modloader/app/structs/PropertyDescriptor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PropertyDescriptor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
