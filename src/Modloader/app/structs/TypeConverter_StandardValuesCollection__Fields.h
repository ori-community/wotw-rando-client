#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeConverter_StandardValuesCollection__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeConverter_StandardValuesCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeConverter_StandardValuesCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_TypeConverter_StandardValuesCollection__Fields_DEFINED
struct ICollection;
struct Array;
struct __declspec(align(8)) TypeConverter_StandardValuesCollection__Fields {
    struct ICollection* values;
    struct Array* valueArray;
};
#endif
#if !defined(IL2CPP_STRUCT_TypeConverter_StandardValuesCollection__Fields_FWDDECL)
#define IL2CPP_STRUCT_TypeConverter_StandardValuesCollection__Fields_FWDDECL
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/ICollection.h>
#endif
#undef IL2CPP_STRUCT_TypeConverter_StandardValuesCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeConverter_StandardValuesCollection__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TypeConverter_StandardValuesCollection__Fields_FWDDECL)
#include <Modloader/app/structs/TypeConverter_StandardValuesCollection__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeConverter_StandardValuesCollection__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
