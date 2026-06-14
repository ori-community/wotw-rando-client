#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExperienceType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExperienceType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExperienceType__Enum_DEFINED)
#define IL2CPP_STRUCT_ExperienceType__Enum_DEFINED
enum class ExperienceType__Enum : int32_t {
    Small = 0x00000000,
    Medium = 0x00000001,
    Large = 0x00000002,
};
#endif
#if !defined(IL2CPP_STRUCT_ExperienceType__Enum_FWDDECL)
#define IL2CPP_STRUCT_ExperienceType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ExperienceType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExperienceType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ExperienceType__Enum_FWDDECL)
#include <Modloader/app/structs/ExperienceType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExperienceType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
