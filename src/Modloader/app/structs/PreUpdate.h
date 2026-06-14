#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PreUpdate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PreUpdate_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreUpdate_DEFINED)
#define IL2CPP_STRUCT_PreUpdate_DEFINED
struct PreUpdate {
};
#endif
#if !defined(IL2CPP_STRUCT_PreUpdate_FWDDECL)
#define IL2CPP_STRUCT_PreUpdate_FWDDECL
#endif
#undef IL2CPP_STRUCT_PreUpdate_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreUpdate_DEFINED) && !defined(IL2CPP_STRUCT_PreUpdate_FWDDECL)
#include <Modloader/app/structs/PreUpdate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PreUpdate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
