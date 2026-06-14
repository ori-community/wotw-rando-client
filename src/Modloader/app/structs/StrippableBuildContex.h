#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StrippableBuildContex_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StrippableBuildContex_INITIALIZING
#if !defined(IL2CPP_STRUCT_StrippableBuildContex_DEFINED)
#include <Modloader/app/structs/StrippableBuildContex_Platform__Enum.h>
#if defined(IL2CPP_STRUCT_StrippableBuildContex_Platform__Enum_DEFINED)
#define IL2CPP_STRUCT_StrippableBuildContex_DEFINED
struct StrippableBuildContex {
    StrippableBuildContex_Platform__Enum BuildPlatform;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StrippableBuildContex_FWDDECL)
#define IL2CPP_STRUCT_StrippableBuildContex_FWDDECL
#endif
#undef IL2CPP_STRUCT_StrippableBuildContex_INITIALIZING
#if !defined(IL2CPP_STRUCT_StrippableBuildContex_DEFINED) && !defined(IL2CPP_STRUCT_StrippableBuildContex_FWDDECL)
#include <Modloader/app/structs/StrippableBuildContex.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StrippableBuildContex.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
