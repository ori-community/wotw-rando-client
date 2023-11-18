#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BinaryHeaderEnum__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BinaryHeaderEnum__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryHeaderEnum__Enum_DEFINED)
#define IL2CPP_STRUCT_BinaryHeaderEnum__Enum_DEFINED
enum class BinaryHeaderEnum__Enum : int32_t {
    SerializedStreamHeader = 0x00000000,
    Object = 0x00000001,
    ObjectWithMap = 0x00000002,
    ObjectWithMapAssemId = 0x00000003,
    ObjectWithMapTyped = 0x00000004,
    ObjectWithMapTypedAssemId = 0x00000005,
    ObjectString = 0x00000006,
    Array = 0x00000007,
    MemberPrimitiveTyped = 0x00000008,
    MemberReference = 0x00000009,
    ObjectNull = 0x0000000a,
    MessageEnd = 0x0000000b,
    Assembly = 0x0000000c,
    ObjectNullMultiple256 = 0x0000000d,
    ObjectNullMultiple = 0x0000000e,
    ArraySinglePrimitive = 0x0000000f,
    ArraySingleObject = 0x00000010,
    ArraySingleString = 0x00000011,
    CrossAppDomainMap = 0x00000012,
    CrossAppDomainString = 0x00000013,
    CrossAppDomainAssembly = 0x00000014,
    MethodCall = 0x00000015,
    MethodReturn = 0x00000016,
};
#endif
#if !defined(IL2CPP_STRUCT_BinaryHeaderEnum__Enum_FWDDECL)
#define IL2CPP_STRUCT_BinaryHeaderEnum__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_BinaryHeaderEnum__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryHeaderEnum__Enum_DEFINED) && !defined(IL2CPP_STRUCT_BinaryHeaderEnum__Enum_FWDDECL)
#include <Modloader/app/structs/BinaryHeaderEnum__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BinaryHeaderEnum__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
