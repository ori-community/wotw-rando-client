#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CryptoStream__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CryptoStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CryptoStream__Fields_DEFINED)
#include <Modloader/app/structs/CryptoStreamMode__Enum.h>
#include <Modloader/app/structs/Stream__Fields.h>
#if defined(IL2CPP_STRUCT_Stream__Fields_DEFINED) && defined(IL2CPP_STRUCT_CryptoStreamMode__Enum_DEFINED)
#define IL2CPP_STRUCT_CryptoStream__Fields_DEFINED
struct Stream;
struct ICryptoTransform;
struct Byte__Array;
struct CryptoStream__Fields {
    struct Stream__Fields _;
    struct Stream* _stream;
    struct ICryptoTransform* _Transform;
    struct Byte__Array* _InputBuffer;
    int32_t _InputBufferIndex;
    int32_t _InputBlockSize;
    struct Byte__Array* _OutputBuffer;
    int32_t _OutputBufferIndex;
    int32_t _OutputBlockSize;
    CryptoStreamMode__Enum _transformMode;

    bool _canRead;
    bool _canWrite;
    bool _finalBlockTransformed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CryptoStream__Fields_FWDDECL)
#define IL2CPP_STRUCT_CryptoStream__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/ICryptoTransform.h>
#include <Modloader/app/structs/Stream.h>
#endif
#undef IL2CPP_STRUCT_CryptoStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CryptoStream__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CryptoStream__Fields_FWDDECL)
#include <Modloader/app/structs/CryptoStream__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CryptoStream__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
