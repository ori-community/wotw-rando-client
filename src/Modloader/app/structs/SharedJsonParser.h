#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SharedJsonParser_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SharedJsonParser_INITIALIZING
#if !defined(IL2CPP_STRUCT_SharedJsonParser_DEFINED)
#define IL2CPP_STRUCT_SharedJsonParser_DEFINED
struct JsonParser;
struct SharedJsonParser {
    struct JsonParser* Instance;
};
#endif
#if !defined(IL2CPP_STRUCT_SharedJsonParser_FWDDECL)
#define IL2CPP_STRUCT_SharedJsonParser_FWDDECL
#include <Modloader/app/structs/JsonParser.h>
#endif
#undef IL2CPP_STRUCT_SharedJsonParser_INITIALIZING
#if !defined(IL2CPP_STRUCT_SharedJsonParser_DEFINED) && !defined(IL2CPP_STRUCT_SharedJsonParser_FWDDECL)
#include <Modloader/app/structs/SharedJsonParser.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SharedJsonParser.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
