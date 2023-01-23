#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeListConverter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeListConverter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeListConverter__Fields_DEFINED)
#define IL2CPP_STRUCT_TypeListConverter__Fields_DEFINED
struct Type__Array;
struct TypeConverter_StandardValuesCollection;
struct __declspec(align(8)) TypeListConverter__Fields {
    struct Type__Array* types;
    struct TypeConverter_StandardValuesCollection* values;
};
#endif
#if !defined(IL2CPP_STRUCT_TypeListConverter__Fields_FWDDECL)
#define IL2CPP_STRUCT_TypeListConverter__Fields_FWDDECL
#include <Modloader/app/structs/TypeConverter_StandardValuesCollection.h>
#include <Modloader/app/structs/Type__Array.h>
#endif
#undef IL2CPP_STRUCT_TypeListConverter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeListConverter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TypeListConverter__Fields_FWDDECL)
#include <Modloader/app/structs/TypeListConverter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeListConverter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
