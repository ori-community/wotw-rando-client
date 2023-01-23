#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SerializationHeaderRecord__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SerializationHeaderRecord__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationHeaderRecord__Fields_DEFINED)
#include <Modloader/app/structs/BinaryHeaderEnum__Enum.h>
#if defined(IL2CPP_STRUCT_BinaryHeaderEnum__Enum_DEFINED)
#define IL2CPP_STRUCT_SerializationHeaderRecord__Fields_DEFINED
struct __declspec(align(8)) SerializationHeaderRecord__Fields {
    int32_t binaryFormatterMajorVersion;
    int32_t binaryFormatterMinorVersion;
    BinaryHeaderEnum__Enum binaryHeaderEnum;

    int32_t topId;
    int32_t headerId;
    int32_t majorVersion;
    int32_t minorVersion;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SerializationHeaderRecord__Fields_FWDDECL)
#define IL2CPP_STRUCT_SerializationHeaderRecord__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_SerializationHeaderRecord__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationHeaderRecord__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SerializationHeaderRecord__Fields_FWDDECL)
#include <Modloader/app/structs/SerializationHeaderRecord__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SerializationHeaderRecord__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
