#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT__BinaryParser__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT__BinaryParser__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT__BinaryParser__Fields_DEFINED)
#include <Modloader/app/structs/BinaryTypeEnum__Enum.h>
#if defined(IL2CPP_STRUCT_BinaryTypeEnum__Enum_DEFINED)
#define IL2CPP_STRUCT__BinaryParser__Fields_DEFINED
struct ObjectReader;
struct Stream;
struct SizedArray;
struct SerStack;
struct Object;
struct ParseRecord;
struct BinaryAssemblyInfo;
struct BinaryReader;
struct BinaryObject;
struct BinaryObjectWithMap;
struct BinaryObjectWithMapTyped;
struct BinaryObjectString;
struct BinaryCrossAppDomainString;
struct MemberPrimitiveTyped;
struct Byte__Array;
struct MemberPrimitiveUnTyped;
struct MemberReference;
struct ObjectNull;
struct __declspec(align(8)) _BinaryParser__Fields {
    struct ObjectReader* objectReader;
    struct Stream* input;
    int64_t topId;
    int64_t headerId;
    struct SizedArray* objectMapIdTable;
    struct SizedArray* assemIdToAssemblyTable;
    struct SerStack* stack;
    BinaryTypeEnum__Enum expectedType;

    struct Object* expectedTypeInformation;
    struct ParseRecord* PRS;
    struct BinaryAssemblyInfo* systemAssemblyInfo;
    struct BinaryReader* dataReader;
    struct SerStack* opPool;
    struct BinaryObject* binaryObject;
    struct BinaryObjectWithMap* bowm;
    struct BinaryObjectWithMapTyped* bowmt;
    struct BinaryObjectString* objectString;
    struct BinaryCrossAppDomainString* crossAppDomainString;
    struct MemberPrimitiveTyped* memberPrimitiveTyped;
    struct Byte__Array* byteBuffer;
    struct MemberPrimitiveUnTyped* memberPrimitiveUnTyped;
    struct MemberReference* memberReference;
    struct ObjectNull* objectNull;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT__BinaryParser__Fields_FWDDECL)
#define IL2CPP_STRUCT__BinaryParser__Fields_FWDDECL
#include <Modloader/app/structs/BinaryAssemblyInfo.h>
#include <Modloader/app/structs/BinaryCrossAppDomainString.h>
#include <Modloader/app/structs/BinaryObject.h>
#include <Modloader/app/structs/BinaryObjectString.h>
#include <Modloader/app/structs/BinaryObjectWithMap.h>
#include <Modloader/app/structs/BinaryObjectWithMapTyped.h>
#include <Modloader/app/structs/BinaryReader.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/MemberPrimitiveTyped.h>
#include <Modloader/app/structs/MemberPrimitiveUnTyped.h>
#include <Modloader/app/structs/MemberReference.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectNull.h>
#include <Modloader/app/structs/ObjectReader.h>
#include <Modloader/app/structs/ParseRecord.h>
#include <Modloader/app/structs/SerStack.h>
#include <Modloader/app/structs/SizedArray.h>
#include <Modloader/app/structs/Stream.h>
#endif
#undef IL2CPP_STRUCT__BinaryParser__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT__BinaryParser__Fields_DEFINED) && !defined(IL2CPP_STRUCT__BinaryParser__Fields_FWDDECL)
#include <Modloader/app/structs/_BinaryParser__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/_BinaryParser__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
