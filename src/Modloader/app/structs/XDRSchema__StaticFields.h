#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XDRSchema__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XDRSchema__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XDRSchema__StaticFields_DEFINED)
#define IL2CPP_STRUCT_XDRSchema__StaticFields_DEFINED
struct Char__Array;
struct XDRSchema_NameType__Array;
struct XDRSchema_NameType;
struct XDRSchema__StaticFields {
    struct Char__Array* s_colonArray;
    struct XDRSchema_NameType__Array* s_mapNameTypeXdr;
    struct XDRSchema_NameType* s_enumerationNameType;
};
#endif
#if !defined(IL2CPP_STRUCT_XDRSchema__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_XDRSchema__StaticFields_FWDDECL
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/XDRSchema_NameType.h>
#include <Modloader/app/structs/XDRSchema_NameType__Array.h>
#endif
#undef IL2CPP_STRUCT_XDRSchema__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XDRSchema__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_XDRSchema__StaticFields_FWDDECL)
#include <Modloader/app/structs/XDRSchema__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XDRSchema__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
