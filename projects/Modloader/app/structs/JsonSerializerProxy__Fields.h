#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonSerializerProxy__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonSerializerProxy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonSerializerProxy__Fields_DEFINED)
#include <Modloader/app/structs/JsonSerializer__Fields.h>
#if defined(IL2CPP_STRUCT_JsonSerializer__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonSerializerProxy__Fields_DEFINED
struct JsonSerializerInternalReader;
struct JsonSerializerInternalWriter;
struct JsonSerializer;
struct JsonSerializerProxy__Fields {
    struct JsonSerializer__Fields _;
    struct JsonSerializerInternalReader* _serializerReader;
    struct JsonSerializerInternalWriter* _serializerWriter;
    struct JsonSerializer* _serializer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonSerializerProxy__Fields_FWDDECL)
#define IL2CPP_STRUCT_JsonSerializerProxy__Fields_FWDDECL
#include <Modloader/app/structs/JsonSerializer.h>
#include <Modloader/app/structs/JsonSerializerInternalReader.h>
#include <Modloader/app/structs/JsonSerializerInternalWriter.h>
#endif
#undef IL2CPP_STRUCT_JsonSerializerProxy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonSerializerProxy__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JsonSerializerProxy__Fields_FWDDECL)
#include <Modloader/app/structs/JsonSerializerProxy__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonSerializerProxy__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
