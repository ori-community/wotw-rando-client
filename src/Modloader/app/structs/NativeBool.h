#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NativeBool_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NativeBool_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeBool_DEFINED)
#define IL2CPP_STRUCT_NativeBool_DEFINED
struct NativeBool {
    uint8_t value;
};
#endif
#if !defined(IL2CPP_STRUCT_NativeBool_FWDDECL)
#define IL2CPP_STRUCT_NativeBool_FWDDECL
#endif
#undef IL2CPP_STRUCT_NativeBool_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeBool_DEFINED) && !defined(IL2CPP_STRUCT_NativeBool_FWDDECL)
#include <Modloader/app/structs/NativeBool.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NativeBool.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
