#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LargeHeader__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LargeHeader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LargeHeader__Fields_DEFINED)
#define IL2CPP_STRUCT_LargeHeader__Fields_DEFINED
struct String;
struct __declspec(align(8)) LargeHeader__Fields {
    struct String* name;
    struct String* color;
};
#endif
#if !defined(IL2CPP_STRUCT_LargeHeader__Fields_FWDDECL)
#define IL2CPP_STRUCT_LargeHeader__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_LargeHeader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LargeHeader__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LargeHeader__Fields_FWDDECL)
#include <Modloader/app/structs/LargeHeader__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LargeHeader__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
