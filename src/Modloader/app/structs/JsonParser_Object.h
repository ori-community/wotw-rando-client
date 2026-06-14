#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonParser_Object_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonParser_Object_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonParser_Object_DEFINED)
#define IL2CPP_STRUCT_JsonParser_Object_DEFINED
struct JsonParser;
struct JsonParser_Object {
    int32_t m_ident;
    struct JsonParser* m_parser;
};
#endif
#if !defined(IL2CPP_STRUCT_JsonParser_Object_FWDDECL)
#define IL2CPP_STRUCT_JsonParser_Object_FWDDECL
#include <Modloader/app/structs/JsonParser.h>
#endif
#undef IL2CPP_STRUCT_JsonParser_Object_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonParser_Object_DEFINED) && !defined(IL2CPP_STRUCT_JsonParser_Object_FWDDECL)
#include <Modloader/app/structs/JsonParser_Object.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonParser_Object.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
