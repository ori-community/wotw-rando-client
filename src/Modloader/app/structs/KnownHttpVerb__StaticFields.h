#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KnownHttpVerb__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KnownHttpVerb__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KnownHttpVerb__StaticFields_DEFINED)
#define IL2CPP_STRUCT_KnownHttpVerb__StaticFields_DEFINED
struct ListDictionary;
struct KnownHttpVerb;
struct KnownHttpVerb__StaticFields {
    struct ListDictionary* NamedHeaders;
    struct KnownHttpVerb* Get;
    struct KnownHttpVerb* Connect;
    struct KnownHttpVerb* Head;
    struct KnownHttpVerb* Put;
    struct KnownHttpVerb* Post;
    struct KnownHttpVerb* MkCol;
};
#endif
#if !defined(IL2CPP_STRUCT_KnownHttpVerb__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_KnownHttpVerb__StaticFields_FWDDECL
#include <Modloader/app/structs/KnownHttpVerb.h>
#include <Modloader/app/structs/ListDictionary.h>
#endif
#undef IL2CPP_STRUCT_KnownHttpVerb__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KnownHttpVerb__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_KnownHttpVerb__StaticFields_FWDDECL)
#include <Modloader/app/structs/KnownHttpVerb__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KnownHttpVerb__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
