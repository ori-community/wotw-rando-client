#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CallingConventions__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CallingConventions__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallingConventions__Enum_DEFINED)
#define IL2CPP_STRUCT_CallingConventions__Enum_DEFINED
enum class CallingConventions__Enum : int32_t {
    Standard = 0x00000001,
    VarArgs = 0x00000002,
    Any = 0x00000003,
    HasThis = 0x00000020,
    ExplicitThis = 0x00000040,
};
#endif
#if !defined(IL2CPP_STRUCT_CallingConventions__Enum_FWDDECL)
#define IL2CPP_STRUCT_CallingConventions__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_CallingConventions__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallingConventions__Enum_DEFINED) && !defined(IL2CPP_STRUCT_CallingConventions__Enum_FWDDECL)
#include <Modloader/app/structs/CallingConventions__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CallingConventions__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
