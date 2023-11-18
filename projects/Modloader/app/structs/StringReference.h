#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StringReference_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StringReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringReference_DEFINED)
#define IL2CPP_STRUCT_StringReference_DEFINED
struct Char__Array;
struct StringReference {
    struct Char__Array* _chars;
    int32_t _startIndex;
    int32_t _length;
};
#endif
#if !defined(IL2CPP_STRUCT_StringReference_FWDDECL)
#define IL2CPP_STRUCT_StringReference_FWDDECL
#include <Modloader/app/structs/Char__Array.h>
#endif
#undef IL2CPP_STRUCT_StringReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringReference_DEFINED) && !defined(IL2CPP_STRUCT_StringReference_FWDDECL)
#include <Modloader/app/structs/StringReference.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StringReference.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
