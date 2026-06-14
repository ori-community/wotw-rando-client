#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DelayedRegex__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DelayedRegex__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelayedRegex__Fields_DEFINED)
#define IL2CPP_STRUCT_DelayedRegex__Fields_DEFINED
struct Regex;
struct String;
struct __declspec(align(8)) DelayedRegex__Fields {
    struct Regex* _AsRegex;
    struct String* _AsString;
};
#endif
#if !defined(IL2CPP_STRUCT_DelayedRegex__Fields_FWDDECL)
#define IL2CPP_STRUCT_DelayedRegex__Fields_FWDDECL
#include <Modloader/app/structs/Regex.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_DelayedRegex__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelayedRegex__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DelayedRegex__Fields_FWDDECL)
#include <Modloader/app/structs/DelayedRegex__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DelayedRegex__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
