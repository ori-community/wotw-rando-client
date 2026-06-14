#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JTokenReader__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JTokenReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JTokenReader__Fields_DEFINED)
#include <Modloader/app/structs/JsonReader__Fields.h>
#if defined(IL2CPP_STRUCT_JsonReader__Fields_DEFINED)
#define IL2CPP_STRUCT_JTokenReader__Fields_DEFINED
struct JToken;
struct String;
struct JTokenReader__Fields {
    struct JsonReader__Fields _;
    struct JToken* _root;
    struct String* _initialPath;
    struct JToken* _parent;
    struct JToken* _current;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JTokenReader__Fields_FWDDECL)
#define IL2CPP_STRUCT_JTokenReader__Fields_FWDDECL
#include <Modloader/app/structs/JToken.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_JTokenReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JTokenReader__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JTokenReader__Fields_FWDDECL)
#include <Modloader/app/structs/JTokenReader__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JTokenReader__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
