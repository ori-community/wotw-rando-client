#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FlushType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FlushType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_FlushType__Enum_DEFINED)
#define IL2CPP_STRUCT_FlushType__Enum_DEFINED
enum class FlushType__Enum : int32_t {
    None = 0x00000000,
    Partial = 0x00000001,
    Sync = 0x00000002,
    Full = 0x00000003,
    Finish = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_FlushType__Enum_FWDDECL)
#define IL2CPP_STRUCT_FlushType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_FlushType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_FlushType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_FlushType__Enum_FWDDECL)
#include <Modloader/app/structs/FlushType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FlushType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
