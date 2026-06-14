#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneDeletionFlags__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneDeletionFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneDeletionFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_SceneDeletionFlags__Enum_DEFINED
enum class SceneDeletionFlags__Enum : int32_t {
    Art = 0x00000001,
    Design = 0x00000004,
    Tech = 0x00000008,
    ThomasApproved = 0x00000010,
};
#endif
#if !defined(IL2CPP_STRUCT_SceneDeletionFlags__Enum_FWDDECL)
#define IL2CPP_STRUCT_SceneDeletionFlags__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_SceneDeletionFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneDeletionFlags__Enum_DEFINED) && !defined(IL2CPP_STRUCT_SceneDeletionFlags__Enum_FWDDECL)
#include <Modloader/app/structs/SceneDeletionFlags__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneDeletionFlags__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
