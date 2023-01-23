#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Enum_DEFINED)
#define IL2CPP_STRUCT_Enum_DEFINED
struct Enum {
};
#endif
#if !defined(IL2CPP_STRUCT_Enum_FWDDECL)
#define IL2CPP_STRUCT_Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Enum_DEFINED) && !defined(IL2CPP_STRUCT_Enum_FWDDECL)
#include <Modloader/app/structs/Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
