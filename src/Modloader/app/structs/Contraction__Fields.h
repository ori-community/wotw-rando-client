#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Contraction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Contraction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Contraction__Fields_DEFINED)
#define IL2CPP_STRUCT_Contraction__Fields_DEFINED
struct Char__Array;
struct String;
struct Byte__Array;
struct __declspec(align(8)) Contraction__Fields {
    int32_t Index;
    struct Char__Array* Source;
    struct String* Replacement;
    struct Byte__Array* SortKey;
};
#endif
#if !defined(IL2CPP_STRUCT_Contraction__Fields_FWDDECL)
#define IL2CPP_STRUCT_Contraction__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_Contraction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Contraction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Contraction__Fields_FWDDECL)
#include <Modloader/app/structs/Contraction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Contraction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
