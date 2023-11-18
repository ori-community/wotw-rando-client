#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ResourceLocation__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ResourceLocation__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResourceLocation__Enum_DEFINED)
#define IL2CPP_STRUCT_ResourceLocation__Enum_DEFINED
enum class ResourceLocation__Enum : int32_t {
    Embedded = 0x00000001,
    ContainedInAnotherAssembly = 0x00000002,
    ContainedInManifestFile = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_ResourceLocation__Enum_FWDDECL)
#define IL2CPP_STRUCT_ResourceLocation__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ResourceLocation__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResourceLocation__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ResourceLocation__Enum_FWDDECL)
#include <Modloader/app/structs/ResourceLocation__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ResourceLocation__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
