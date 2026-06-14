#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonWriterException__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonWriterException__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonWriterException__Fields_DEFINED)
#include <Modloader/app/structs/JsonException__Fields.h>
#if defined(IL2CPP_STRUCT_JsonException__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonWriterException__Fields_DEFINED
struct String;
struct JsonWriterException__Fields {
    struct JsonException__Fields _;
    struct String* _Path_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonWriterException__Fields_FWDDECL)
#define IL2CPP_STRUCT_JsonWriterException__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_JsonWriterException__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonWriterException__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JsonWriterException__Fields_FWDDECL)
#include <Modloader/app/structs/JsonWriterException__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonWriterException__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
