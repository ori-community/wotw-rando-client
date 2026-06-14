#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ValidationHelper__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ValidationHelper__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValidationHelper__StaticFields_DEFINED)
#define IL2CPP_STRUCT_ValidationHelper__StaticFields_DEFINED
struct String__Array;
struct Char__Array;
struct ValidationHelper__StaticFields {
    struct String__Array* EmptyArray;
    struct Char__Array* InvalidMethodChars;
    struct Char__Array* InvalidParamChars;
};
#endif
#if !defined(IL2CPP_STRUCT_ValidationHelper__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_ValidationHelper__StaticFields_FWDDECL
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_ValidationHelper__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValidationHelper__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_ValidationHelper__StaticFields_FWDDECL)
#include <Modloader/app/structs/ValidationHelper__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ValidationHelper__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
