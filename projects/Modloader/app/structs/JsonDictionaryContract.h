#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonDictionaryContract_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonDictionaryContract_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonDictionaryContract_DEFINED)
#include <Modloader/app/structs/JsonDictionaryContract__Fields.h>
#if defined(IL2CPP_STRUCT_JsonDictionaryContract__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonDictionaryContract_DEFINED
struct JsonDictionaryContract__Class;
struct JsonDictionaryContract {
    struct JsonDictionaryContract__Class* klass;
    MonitorData* monitor;
    struct JsonDictionaryContract__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonDictionaryContract_FWDDECL)
#define IL2CPP_STRUCT_JsonDictionaryContract_FWDDECL
#include <Modloader/app/structs/JsonDictionaryContract__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonDictionaryContract_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonDictionaryContract_DEFINED) && !defined(IL2CPP_STRUCT_JsonDictionaryContract_FWDDECL)
#include <Modloader/app/structs/JsonDictionaryContract.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonDictionaryContract.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
