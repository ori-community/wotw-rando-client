#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContentValidator__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContentValidator__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContentValidator__StaticFields_DEFINED)
#define IL2CPP_STRUCT_ContentValidator__StaticFields_DEFINED
struct ContentValidator;
struct ContentValidator__StaticFields {
    struct ContentValidator* Empty;
    struct ContentValidator* TextOnly;
    struct ContentValidator* Mixed;
    struct ContentValidator* Any;
};
#endif
#if !defined(IL2CPP_STRUCT_ContentValidator__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_ContentValidator__StaticFields_FWDDECL
#include <Modloader/app/structs/ContentValidator.h>
#endif
#undef IL2CPP_STRUCT_ContentValidator__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContentValidator__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_ContentValidator__StaticFields_FWDDECL)
#include <Modloader/app/structs/ContentValidator__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContentValidator__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
