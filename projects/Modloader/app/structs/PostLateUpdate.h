#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PostLateUpdate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PostLateUpdate_INITIALIZING
#if !defined(IL2CPP_STRUCT_PostLateUpdate_DEFINED)
#define IL2CPP_STRUCT_PostLateUpdate_DEFINED
struct PostLateUpdate {
};
#endif
#if !defined(IL2CPP_STRUCT_PostLateUpdate_FWDDECL)
#define IL2CPP_STRUCT_PostLateUpdate_FWDDECL
#endif
#undef IL2CPP_STRUCT_PostLateUpdate_INITIALIZING
#if !defined(IL2CPP_STRUCT_PostLateUpdate_DEFINED) && !defined(IL2CPP_STRUCT_PostLateUpdate_FWDDECL)
#include <Modloader/app/structs/PostLateUpdate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PostLateUpdate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
