#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JTokenWriter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JTokenWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JTokenWriter__Fields_DEFINED)
#include <Modloader/app/structs/JsonWriter__Fields.h>
#if defined(IL2CPP_STRUCT_JsonWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_JTokenWriter__Fields_DEFINED
struct JContainer;
struct JValue;
struct JToken;
struct JTokenWriter__Fields {
    struct JsonWriter__Fields _;
    struct JContainer* _token;
    struct JContainer* _parent;
    struct JValue* _value;
    struct JToken* _current;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JTokenWriter__Fields_FWDDECL)
#define IL2CPP_STRUCT_JTokenWriter__Fields_FWDDECL
#include <Modloader/app/structs/JContainer.h>
#include <Modloader/app/structs/JToken.h>
#include <Modloader/app/structs/JValue.h>
#endif
#undef IL2CPP_STRUCT_JTokenWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JTokenWriter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JTokenWriter__Fields_FWDDECL)
#include <Modloader/app/structs/JTokenWriter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JTokenWriter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
