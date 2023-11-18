#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonReaderException__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonReaderException__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonReaderException__Fields_DEFINED)
#include <Modloader/app/structs/JsonException__Fields.h>
#if defined(IL2CPP_STRUCT_JsonException__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonReaderException__Fields_DEFINED
struct String;
struct JsonReaderException__Fields {
    struct JsonException__Fields _;
    int32_t _LineNumber_k__BackingField;
    int32_t _LinePosition_k__BackingField;
    struct String* _Path_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonReaderException__Fields_FWDDECL)
#define IL2CPP_STRUCT_JsonReaderException__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_JsonReaderException__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonReaderException__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JsonReaderException__Fields_FWDDECL)
#include <Modloader/app/structs/JsonReaderException__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonReaderException__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
