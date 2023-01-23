#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlBytes__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlBytes__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlBytes__Fields_DEFINED)
#include <Modloader/app/structs/SqlBytesCharsState__Enum.h>
#if defined(IL2CPP_STRUCT_SqlBytesCharsState__Enum_DEFINED)
#define IL2CPP_STRUCT_SqlBytes__Fields_DEFINED
struct Byte__Array;
struct Stream;
struct __declspec(align(8)) SqlBytes__Fields {
    struct Byte__Array* _rgbBuf;
    int64_t _lCurLen;
    struct Stream* _stream;
    SqlBytesCharsState__Enum _state;

    struct Byte__Array* _rgbWorkBuf;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SqlBytes__Fields_FWDDECL)
#define IL2CPP_STRUCT_SqlBytes__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Stream.h>
#endif
#undef IL2CPP_STRUCT_SqlBytes__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlBytes__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SqlBytes__Fields_FWDDECL)
#include <Modloader/app/structs/SqlBytes__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlBytes__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
