#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MatchEnumerator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MatchEnumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchEnumerator__Fields_DEFINED)
#define IL2CPP_STRUCT_MatchEnumerator__Fields_DEFINED
struct MatchCollection;
struct Match;
struct __declspec(align(8)) MatchEnumerator__Fields {
    struct MatchCollection* _matchcoll;
    struct Match* _match;
    int32_t _curindex;
    bool _done;
};
#endif
#if !defined(IL2CPP_STRUCT_MatchEnumerator__Fields_FWDDECL)
#define IL2CPP_STRUCT_MatchEnumerator__Fields_FWDDECL
#include <Modloader/app/structs/Match.h>
#include <Modloader/app/structs/MatchCollection.h>
#endif
#undef IL2CPP_STRUCT_MatchEnumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchEnumerator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MatchEnumerator__Fields_FWDDECL)
#include <Modloader/app/structs/MatchEnumerator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MatchEnumerator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
