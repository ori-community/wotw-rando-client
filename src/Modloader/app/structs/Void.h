#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Void_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Void_INITIALIZING
#if !defined(IL2CPP_STRUCT_Void_DEFINED)
#define IL2CPP_STRUCT_Void_DEFINED
struct Void {
};
#endif
#if !defined(IL2CPP_STRUCT_Void_FWDDECL)
#define IL2CPP_STRUCT_Void_FWDDECL
#endif
#undef IL2CPP_STRUCT_Void_INITIALIZING
#if !defined(IL2CPP_STRUCT_Void_DEFINED) && !defined(IL2CPP_STRUCT_Void_FWDDECL)
#include <Modloader/app/structs/Void.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Void.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
