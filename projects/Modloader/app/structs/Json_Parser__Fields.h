#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Json_Parser__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Json_Parser__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Json_Parser__Fields_DEFINED)
#define IL2CPP_STRUCT_Json_Parser__Fields_DEFINED
struct StringReader;
struct __declspec(align(8)) Json_Parser__Fields {
    struct StringReader* json;
};
#endif
#if !defined(IL2CPP_STRUCT_Json_Parser__Fields_FWDDECL)
#define IL2CPP_STRUCT_Json_Parser__Fields_FWDDECL
#include <Modloader/app/structs/StringReader.h>
#endif
#undef IL2CPP_STRUCT_Json_Parser__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Json_Parser__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Json_Parser__Fields_FWDDECL)
#include <Modloader/app/structs/Json_Parser__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Json_Parser__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
