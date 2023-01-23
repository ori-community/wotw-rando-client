#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT__BinaryWriter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT__BinaryWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT__BinaryWriter__Fields_DEFINED)
#include <Modloader/app/structs/FormatterTypeStyle__Enum.h>
#if defined(IL2CPP_STRUCT_FormatterTypeStyle__Enum_DEFINED)
#define IL2CPP_STRUCT__BinaryWriter__Fields_DEFINED
struct Stream;
struct Hashtable;
struct ObjectWriter;
struct BinaryWriter;
struct BinaryMethodCall;
struct BinaryMethodReturn;
struct BinaryObject;
struct BinaryObjectWithMap;
struct BinaryObjectWithMapTyped;
struct BinaryObjectString;
struct BinaryArray;
struct Byte__Array;
struct MemberPrimitiveUnTyped;
struct MemberPrimitiveTyped;
struct ObjectNull;
struct MemberReference;
struct BinaryAssembly;
struct __declspec(align(8)) _BinaryWriter__Fields {
    struct Stream* sout;
    FormatterTypeStyle__Enum formatterTypeStyle;

    struct Hashtable* objectMapTable;
    struct ObjectWriter* objectWriter;
    struct BinaryWriter* dataWriter;
    int32_t m_nestedObjectCount;
    int32_t nullCount;
    struct BinaryMethodCall* binaryMethodCall;
    struct BinaryMethodReturn* binaryMethodReturn;
    struct BinaryObject* binaryObject;
    struct BinaryObjectWithMap* binaryObjectWithMap;
    struct BinaryObjectWithMapTyped* binaryObjectWithMapTyped;
    struct BinaryObjectString* binaryObjectString;
    struct BinaryArray* binaryArray;
    struct Byte__Array* byteBuffer;
    int32_t chunkSize;
    struct MemberPrimitiveUnTyped* memberPrimitiveUnTyped;
    struct MemberPrimitiveTyped* memberPrimitiveTyped;
    struct ObjectNull* objectNull;
    struct MemberReference* memberReference;
    struct BinaryAssembly* binaryAssembly;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT__BinaryWriter__Fields_FWDDECL)
#define IL2CPP_STRUCT__BinaryWriter__Fields_FWDDECL
#include <Modloader/app/structs/BinaryArray.h>
#include <Modloader/app/structs/BinaryAssembly.h>
#include <Modloader/app/structs/BinaryMethodCall.h>
#include <Modloader/app/structs/BinaryMethodReturn.h>
#include <Modloader/app/structs/BinaryObject.h>
#include <Modloader/app/structs/BinaryObjectString.h>
#include <Modloader/app/structs/BinaryObjectWithMap.h>
#include <Modloader/app/structs/BinaryObjectWithMapTyped.h>
#include <Modloader/app/structs/BinaryWriter.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/MemberPrimitiveTyped.h>
#include <Modloader/app/structs/MemberPrimitiveUnTyped.h>
#include <Modloader/app/structs/MemberReference.h>
#include <Modloader/app/structs/ObjectNull.h>
#include <Modloader/app/structs/ObjectWriter.h>
#include <Modloader/app/structs/Stream.h>
#endif
#undef IL2CPP_STRUCT__BinaryWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT__BinaryWriter__Fields_DEFINED) && !defined(IL2CPP_STRUCT__BinaryWriter__Fields_FWDDECL)
#include <Modloader/app/structs/_BinaryWriter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/_BinaryWriter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
