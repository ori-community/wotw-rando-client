#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RefreshEventArgs__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RefreshEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RefreshEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_RefreshEventArgs__Fields_DEFINED
struct Object;
struct Type;
struct __declspec(align(8)) RefreshEventArgs__Fields {
    struct Object* componentChanged;
    struct Type* typeChanged;
};
#endif
#if !defined(IL2CPP_STRUCT_RefreshEventArgs__Fields_FWDDECL)
#define IL2CPP_STRUCT_RefreshEventArgs__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_RefreshEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RefreshEventArgs__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RefreshEventArgs__Fields_FWDDECL)
#include <Modloader/app/structs/RefreshEventArgs__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RefreshEventArgs__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
