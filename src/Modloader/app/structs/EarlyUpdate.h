#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EarlyUpdate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EarlyUpdate_INITIALIZING
#if !defined(IL2CPP_STRUCT_EarlyUpdate_DEFINED)
#define IL2CPP_STRUCT_EarlyUpdate_DEFINED
struct EarlyUpdate {
};
#endif
#if !defined(IL2CPP_STRUCT_EarlyUpdate_FWDDECL)
#define IL2CPP_STRUCT_EarlyUpdate_FWDDECL
#endif
#undef IL2CPP_STRUCT_EarlyUpdate_INITIALIZING
#if !defined(IL2CPP_STRUCT_EarlyUpdate_DEFINED) && !defined(IL2CPP_STRUCT_EarlyUpdate_FWDDECL)
#include <Modloader/app/structs/EarlyUpdate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EarlyUpdate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
