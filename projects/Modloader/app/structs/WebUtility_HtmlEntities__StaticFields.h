#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebUtility_HtmlEntities__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebUtility_HtmlEntities__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebUtility_HtmlEntities__StaticFields_DEFINED)
#define IL2CPP_STRUCT_WebUtility_HtmlEntities__StaticFields_DEFINED
struct Int64__Array;
struct Char__Array;
struct WebUtility_HtmlEntities__StaticFields {
    struct Int64__Array* entities;
    struct Char__Array* entities_values;
};
#endif
#if !defined(IL2CPP_STRUCT_WebUtility_HtmlEntities__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_WebUtility_HtmlEntities__StaticFields_FWDDECL
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Int64__Array.h>
#endif
#undef IL2CPP_STRUCT_WebUtility_HtmlEntities__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebUtility_HtmlEntities__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_WebUtility_HtmlEntities__StaticFields_FWDDECL)
#include <Modloader/app/structs/WebUtility_HtmlEntities__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebUtility_HtmlEntities__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
