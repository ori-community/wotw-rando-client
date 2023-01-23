#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonDictionaryAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonDictionaryAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonDictionaryAttribute_DEFINED)
#include <Modloader/app/structs/JsonDictionaryAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_JsonDictionaryAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonDictionaryAttribute_DEFINED
struct JsonDictionaryAttribute__Class;
struct JsonDictionaryAttribute {
    struct JsonDictionaryAttribute__Class* klass;
    MonitorData* monitor;
    struct JsonDictionaryAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonDictionaryAttribute_FWDDECL)
#define IL2CPP_STRUCT_JsonDictionaryAttribute_FWDDECL
#include <Modloader/app/structs/JsonDictionaryAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonDictionaryAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonDictionaryAttribute_DEFINED) && !defined(IL2CPP_STRUCT_JsonDictionaryAttribute_FWDDECL)
#include <Modloader/app/structs/JsonDictionaryAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonDictionaryAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
