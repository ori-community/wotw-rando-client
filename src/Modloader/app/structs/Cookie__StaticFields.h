#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Cookie__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Cookie__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Cookie__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Cookie__StaticFields_DEFINED
struct Char__Array;
struct Comparer_1;
struct Cookie__StaticFields {
    struct Char__Array* PortSplitDelimiters;
    struct Char__Array* Reserved2Name;
    struct Char__Array* Reserved2Value;
    struct Comparer_1* staticComparer;
};
#endif
#if !defined(IL2CPP_STRUCT_Cookie__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Cookie__StaticFields_FWDDECL
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Comparer_1.h>
#endif
#undef IL2CPP_STRUCT_Cookie__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Cookie__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Cookie__StaticFields_FWDDECL)
#include <Modloader/app/structs/Cookie__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Cookie__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
