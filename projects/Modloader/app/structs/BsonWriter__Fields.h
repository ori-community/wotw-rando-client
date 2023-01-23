#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BsonWriter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BsonWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonWriter__Fields_DEFINED)
#include <Modloader/app/structs/JsonWriter__Fields.h>
#if defined(IL2CPP_STRUCT_JsonWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_BsonWriter__Fields_DEFINED
struct BsonBinaryWriter;
struct BsonToken;
struct String;
struct BsonWriter__Fields {
    struct JsonWriter__Fields _;
    struct BsonBinaryWriter* _writer;
    struct BsonToken* _root;
    struct BsonToken* _parent;
    struct String* _propertyName;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BsonWriter__Fields_FWDDECL)
#define IL2CPP_STRUCT_BsonWriter__Fields_FWDDECL
#include <Modloader/app/structs/BsonBinaryWriter.h>
#include <Modloader/app/structs/BsonToken.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_BsonWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonWriter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BsonWriter__Fields_FWDDECL)
#include <Modloader/app/structs/BsonWriter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BsonWriter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
