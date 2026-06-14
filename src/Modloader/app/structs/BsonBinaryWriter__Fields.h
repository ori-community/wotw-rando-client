#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BsonBinaryWriter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BsonBinaryWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonBinaryWriter__Fields_DEFINED)
#include <Modloader/app/structs/DateTimeKind__Enum.h>
#if defined(IL2CPP_STRUCT_DateTimeKind__Enum_DEFINED)
#define IL2CPP_STRUCT_BsonBinaryWriter__Fields_DEFINED
struct BinaryWriter;
struct Byte__Array;
struct __declspec(align(8)) BsonBinaryWriter__Fields {
    struct BinaryWriter* _writer;
    struct Byte__Array* _largeByteBuffer;
    DateTimeKind__Enum _DateTimeKindHandling_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BsonBinaryWriter__Fields_FWDDECL)
#define IL2CPP_STRUCT_BsonBinaryWriter__Fields_FWDDECL
#include <Modloader/app/structs/BinaryWriter.h>
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_BsonBinaryWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonBinaryWriter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BsonBinaryWriter__Fields_FWDDECL)
#include <Modloader/app/structs/BsonBinaryWriter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BsonBinaryWriter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
