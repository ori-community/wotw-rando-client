#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ManifestResourceInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ManifestResourceInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ManifestResourceInfo__Fields_DEFINED)
#include <Modloader/app/structs/ResourceLocation__Enum.h>
#if defined(IL2CPP_STRUCT_ResourceLocation__Enum_DEFINED)
#define IL2CPP_STRUCT_ManifestResourceInfo__Fields_DEFINED
struct Assembly;
struct String;
struct __declspec(align(8)) ManifestResourceInfo__Fields {
    struct Assembly* _containingAssembly;
    struct String* _containingFileName;
    ResourceLocation__Enum _resourceLocation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ManifestResourceInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_ManifestResourceInfo__Fields_FWDDECL
#include <Modloader/app/structs/Assembly.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ManifestResourceInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ManifestResourceInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ManifestResourceInfo__Fields_FWDDECL)
#include <Modloader/app/structs/ManifestResourceInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ManifestResourceInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
