#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnumConverter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnumConverter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnumConverter__Fields_DEFINED)
#define IL2CPP_STRUCT_EnumConverter__Fields_DEFINED
struct TypeConverter_StandardValuesCollection;
struct Type;
struct __declspec(align(8)) EnumConverter__Fields {
    struct TypeConverter_StandardValuesCollection* values;
    struct Type* type;
};
#endif
#if !defined(IL2CPP_STRUCT_EnumConverter__Fields_FWDDECL)
#define IL2CPP_STRUCT_EnumConverter__Fields_FWDDECL
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeConverter_StandardValuesCollection.h>
#endif
#undef IL2CPP_STRUCT_EnumConverter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnumConverter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EnumConverter__Fields_FWDDECL)
#include <Modloader/app/structs/EnumConverter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnumConverter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
