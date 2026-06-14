#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnumDictionary_2_System_Object_System_Object___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnumDictionary_2_System_Object_System_Object___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnumDictionary_2_System_Object_System_Object___Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_EnumDictionary_2_System_Object_System_Object___Fields_DEFINED
struct Object;
struct List_1_System_Object_;
struct Dictionary_2_System_Object_System_Object_;
struct EnumDictionary_2_System_Object_System_Object___Fields {
    struct MonoBehaviour__Fields _;
    struct Object* Missing;
    bool ThrowMissingError;
    struct List_1_System_Object_* m_keys;
    struct List_1_System_Object_* m_values;
    struct Dictionary_2_System_Object_System_Object_* m_dictionary;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnumDictionary_2_System_Object_System_Object___Fields_FWDDECL)
#define IL2CPP_STRUCT_EnumDictionary_2_System_Object_System_Object___Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/List_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_EnumDictionary_2_System_Object_System_Object___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnumDictionary_2_System_Object_System_Object___Fields_DEFINED) && !defined(IL2CPP_STRUCT_EnumDictionary_2_System_Object_System_Object___Fields_FWDDECL)
#include <Modloader/app/structs/EnumDictionary_2_System_Object_System_Object___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnumDictionary_2_System_Object_System_Object___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
