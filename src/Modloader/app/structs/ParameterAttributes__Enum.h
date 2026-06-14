#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParameterAttributes__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParameterAttributes__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParameterAttributes__Enum_DEFINED)
#define IL2CPP_STRUCT_ParameterAttributes__Enum_DEFINED
enum class ParameterAttributes__Enum : int32_t {
    None = 0x00000000,
    In = 0x00000001,
    Out = 0x00000002,
    Lcid = 0x00000004,
    Retval = 0x00000008,
    Optional = 0x00000010,
    ReservedMask = 0x0000f000,
    HasDefault = 0x00001000,
    HasFieldMarshal = 0x00002000,
    Reserved3 = 0x00004000,
    Reserved4 = 0x00008000,
};
#endif
#if !defined(IL2CPP_STRUCT_ParameterAttributes__Enum_FWDDECL)
#define IL2CPP_STRUCT_ParameterAttributes__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ParameterAttributes__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParameterAttributes__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ParameterAttributes__Enum_FWDDECL)
#include <Modloader/app/structs/ParameterAttributes__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParameterAttributes__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
