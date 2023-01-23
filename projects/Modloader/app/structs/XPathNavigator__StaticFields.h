#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XPathNavigator__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XPathNavigator__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathNavigator__StaticFields_DEFINED)
#define IL2CPP_STRUCT_XPathNavigator__StaticFields_DEFINED
struct XPathNavigatorKeyComparer;
struct Char__Array;
struct Int32__Array;
struct XPathNavigator__StaticFields {
    struct XPathNavigatorKeyComparer* comparer;
    struct Char__Array* NodeTypeLetter;
    struct Char__Array* UniqueIdTbl;
    struct Int32__Array* ContentKindMasks;
};
#endif
#if !defined(IL2CPP_STRUCT_XPathNavigator__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_XPathNavigator__StaticFields_FWDDECL
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/XPathNavigatorKeyComparer.h>
#endif
#undef IL2CPP_STRUCT_XPathNavigator__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathNavigator__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_XPathNavigator__StaticFields_FWDDECL)
#include <Modloader/app/structs/XPathNavigator__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XPathNavigator__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
