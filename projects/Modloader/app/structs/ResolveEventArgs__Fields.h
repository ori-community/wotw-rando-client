#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ResolveEventArgs__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ResolveEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResolveEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_ResolveEventArgs__Fields_DEFINED
struct String;
struct Assembly;
struct __declspec(align(8)) ResolveEventArgs__Fields {
    struct String* m_Name;
    struct Assembly* m_Requesting;
};
#endif
#if !defined(IL2CPP_STRUCT_ResolveEventArgs__Fields_FWDDECL)
#define IL2CPP_STRUCT_ResolveEventArgs__Fields_FWDDECL
#include <Modloader/app/structs/Assembly.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ResolveEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResolveEventArgs__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ResolveEventArgs__Fields_FWDDECL)
#include <Modloader/app/structs/ResolveEventArgs__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ResolveEventArgs__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
