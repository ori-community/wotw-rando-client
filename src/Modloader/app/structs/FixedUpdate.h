#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FixedUpdate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FixedUpdate_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixedUpdate_DEFINED)
#define IL2CPP_STRUCT_FixedUpdate_DEFINED
struct FixedUpdate {
};
#endif
#if !defined(IL2CPP_STRUCT_FixedUpdate_FWDDECL)
#define IL2CPP_STRUCT_FixedUpdate_FWDDECL
#endif
#undef IL2CPP_STRUCT_FixedUpdate_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixedUpdate_DEFINED) && !defined(IL2CPP_STRUCT_FixedUpdate_FWDDECL)
#include <Modloader/app/structs/FixedUpdate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FixedUpdate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
