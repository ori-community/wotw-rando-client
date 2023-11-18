#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlChars__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlChars__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlChars__Fields_DEFINED)
#include <Modloader/app/structs/SqlBytesCharsState__Enum.h>
#if defined(IL2CPP_STRUCT_SqlBytesCharsState__Enum_DEFINED)
#define IL2CPP_STRUCT_SqlChars__Fields_DEFINED
struct Char__Array;
struct SqlStreamChars;
struct __declspec(align(8)) SqlChars__Fields {
    struct Char__Array* _rgchBuf;
    int64_t _lCurLen;
    struct SqlStreamChars* _stream;
    SqlBytesCharsState__Enum _state;

    struct Char__Array* _rgchWorkBuf;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SqlChars__Fields_FWDDECL)
#define IL2CPP_STRUCT_SqlChars__Fields_FWDDECL
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/SqlStreamChars.h>
#endif
#undef IL2CPP_STRUCT_SqlChars__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlChars__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SqlChars__Fields_FWDDECL)
#include <Modloader/app/structs/SqlChars__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlChars__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
