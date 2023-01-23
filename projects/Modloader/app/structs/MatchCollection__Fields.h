#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MatchCollection__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MatchCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_MatchCollection__Fields_DEFINED
struct Regex;
struct ArrayList;
struct String;
struct __declspec(align(8)) MatchCollection__Fields {
    struct Regex* _regex;
    struct ArrayList* _matches;
    bool _done;
    struct String* _input;
    int32_t _beginning;
    int32_t _length;
    int32_t _startat;
    int32_t _prevlen;
};
#endif
#if !defined(IL2CPP_STRUCT_MatchCollection__Fields_FWDDECL)
#define IL2CPP_STRUCT_MatchCollection__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/Regex.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MatchCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchCollection__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MatchCollection__Fields_FWDDECL)
#include <Modloader/app/structs/MatchCollection__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MatchCollection__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
