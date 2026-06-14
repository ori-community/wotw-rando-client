#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderRuntimeUpdate__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderRuntimeUpdate__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderRuntimeUpdate__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_UberShaderRuntimeUpdate__Fields_DEFINED
struct List_1_UberShaderRuntimeAnchoredTexture_;
struct UberShaderRuntimeUpdate__Fields {
    struct MonoBehaviour__Fields _;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    struct List_1_UberShaderRuntimeAnchoredTexture_* m_worldProjectionTextures;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderRuntimeUpdate__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberShaderRuntimeUpdate__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UberShaderRuntimeAnchoredTexture_.h>
#endif
#undef IL2CPP_STRUCT_UberShaderRuntimeUpdate__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderRuntimeUpdate__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderRuntimeUpdate__Fields_FWDDECL)
#include <Modloader/app/structs/UberShaderRuntimeUpdate__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderRuntimeUpdate__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
