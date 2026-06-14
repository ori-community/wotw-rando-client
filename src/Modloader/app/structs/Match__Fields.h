#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Match__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Match__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Match__Fields_DEFINED)
#include <Modloader/app/structs/Group__Fields.h>
#if defined(IL2CPP_STRUCT_Group__Fields_DEFINED)
#define IL2CPP_STRUCT_Match__Fields_DEFINED
struct GroupCollection;
struct Regex;
struct Int32__Array__Array;
struct Int32__Array;
struct Match__Fields {
    struct Group__Fields _;
    struct GroupCollection* _groupcoll;
    struct Regex* _regex;
    int32_t _textbeg;
    int32_t _textpos;
    int32_t _textend;
    int32_t _textstart;
    struct Int32__Array__Array* _matches;
    struct Int32__Array* _matchcount;
    bool _balancing;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Match__Fields_FWDDECL)
#define IL2CPP_STRUCT_Match__Fields_FWDDECL
#include <Modloader/app/structs/GroupCollection.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Int32__Array__Array.h>
#include <Modloader/app/structs/Regex.h>
#endif
#undef IL2CPP_STRUCT_Match__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Match__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Match__Fields_FWDDECL)
#include <Modloader/app/structs/Match__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Match__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
