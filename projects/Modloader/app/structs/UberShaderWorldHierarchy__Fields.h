#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderWorldHierarchy__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderWorldHierarchy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderWorldHierarchy__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_UberShaderWorldHierarchy__Fields_DEFINED
struct UberShaderWorldHierarchyDictionary;
struct UberShaderWorldHierarchy__Fields {
    struct MonoBehaviour__Fields _;
    struct UberShaderWorldHierarchyDictionary* Properties;
    struct Vector2 Offset;
    struct Vector2 TextureSize;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderWorldHierarchy__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberShaderWorldHierarchy__Fields_FWDDECL
#include <Modloader/app/structs/UberShaderWorldHierarchyDictionary.h>
#endif
#undef IL2CPP_STRUCT_UberShaderWorldHierarchy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderWorldHierarchy__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderWorldHierarchy__Fields_FWDDECL)
#include <Modloader/app/structs/UberShaderWorldHierarchy__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderWorldHierarchy__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
