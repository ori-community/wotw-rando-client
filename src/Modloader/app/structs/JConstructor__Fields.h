#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JConstructor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JConstructor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JConstructor__Fields_DEFINED)
#include <Modloader/app/structs/JContainer__Fields.h>
#if defined(IL2CPP_STRUCT_JContainer__Fields_DEFINED)
#define IL2CPP_STRUCT_JConstructor__Fields_DEFINED
struct String;
struct List_1_Newtonsoft_Json_Linq_JToken_;
struct JConstructor__Fields {
    struct JContainer__Fields _;
    struct String* _name;
    struct List_1_Newtonsoft_Json_Linq_JToken_* _values;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JConstructor__Fields_FWDDECL)
#define IL2CPP_STRUCT_JConstructor__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Newtonsoft_Json_Linq_JToken_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_JConstructor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JConstructor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JConstructor__Fields_FWDDECL)
#include <Modloader/app/structs/JConstructor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JConstructor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
