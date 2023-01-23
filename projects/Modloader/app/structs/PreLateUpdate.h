#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PreLateUpdate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PreLateUpdate_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreLateUpdate_DEFINED)
#define IL2CPP_STRUCT_PreLateUpdate_DEFINED
struct PreLateUpdate {
};
#endif
#if !defined(IL2CPP_STRUCT_PreLateUpdate_FWDDECL)
#define IL2CPP_STRUCT_PreLateUpdate_FWDDECL
#endif
#undef IL2CPP_STRUCT_PreLateUpdate_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreLateUpdate_DEFINED) && !defined(IL2CPP_STRUCT_PreLateUpdate_FWDDECL)
#include <Modloader/app/structs/PreLateUpdate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PreLateUpdate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
