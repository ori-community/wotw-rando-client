#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SecurityElement__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SecurityElement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityElement__Fields_DEFINED)
#define IL2CPP_STRUCT_SecurityElement__Fields_DEFINED
struct String;
struct ArrayList;
struct __declspec(align(8)) SecurityElement__Fields {
    struct String* text;
    struct String* tag;
    struct ArrayList* attributes;
    struct ArrayList* children;
};
#endif
#if !defined(IL2CPP_STRUCT_SecurityElement__Fields_FWDDECL)
#define IL2CPP_STRUCT_SecurityElement__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SecurityElement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityElement__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SecurityElement__Fields_FWDDECL)
#include <Modloader/app/structs/SecurityElement__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SecurityElement__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
