#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Initialization_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Initialization_INITIALIZING
#if !defined(IL2CPP_STRUCT_Initialization_DEFINED)
#define IL2CPP_STRUCT_Initialization_DEFINED
struct Initialization {
};
#endif
#if !defined(IL2CPP_STRUCT_Initialization_FWDDECL)
#define IL2CPP_STRUCT_Initialization_FWDDECL
#endif
#undef IL2CPP_STRUCT_Initialization_INITIALIZING
#if !defined(IL2CPP_STRUCT_Initialization_DEFINED) && !defined(IL2CPP_STRUCT_Initialization_FWDDECL)
#include <Modloader/app/structs/Initialization.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Initialization.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
