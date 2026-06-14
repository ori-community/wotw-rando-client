#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MetaData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MetaData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MetaData__Fields_DEFINED)
#define IL2CPP_STRUCT_MetaData__Fields_DEFINED
struct String;
struct Texture2D;
struct __declspec(align(8)) MetaData__Fields {
    struct String* content;
    struct String* platform;
    struct Texture2D* screenshot;
};
#endif
#if !defined(IL2CPP_STRUCT_MetaData__Fields_FWDDECL)
#define IL2CPP_STRUCT_MetaData__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_MetaData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MetaData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MetaData__Fields_FWDDECL)
#include <Modloader/app/structs/MetaData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MetaData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
