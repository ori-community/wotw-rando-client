#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Update_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Update_INITIALIZING
#if !defined(IL2CPP_STRUCT_Update_DEFINED)
#define IL2CPP_STRUCT_Update_DEFINED
struct Update {
};
#endif
#if !defined(IL2CPP_STRUCT_Update_FWDDECL)
#define IL2CPP_STRUCT_Update_FWDDECL
#endif
#undef IL2CPP_STRUCT_Update_INITIALIZING
#if !defined(IL2CPP_STRUCT_Update_DEFINED) && !defined(IL2CPP_STRUCT_Update_FWDDECL)
#include <Modloader/app/structs/Update.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Update.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
