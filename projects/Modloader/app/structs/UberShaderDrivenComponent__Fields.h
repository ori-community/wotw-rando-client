#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderDrivenComponent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderDrivenComponent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderDrivenComponent__Fields_DEFINED)
#include <Modloader/app/structs/UIComponent__Fields.h>
#include <Modloader/app/structs/UberShaderDrivenComponent_ViewMode__Enum.h>
#if defined(IL2CPP_STRUCT_UIComponent__Fields_DEFINED) && defined(IL2CPP_STRUCT_UberShaderDrivenComponent_ViewMode__Enum_DEFINED)
#define IL2CPP_STRUCT_UberShaderDrivenComponent__Fields_DEFINED
struct LegacyTimelineSequence;
struct UberShaderDrivenComponent__Fields {
    struct UIComponent__Fields _;
    struct LegacyTimelineSequence* DisabledSequence;
    struct LegacyTimelineSequence* NormalSequence;
    UberShaderDrivenComponent_ViewMode__Enum SpriteViewMode;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderDrivenComponent__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberShaderDrivenComponent__Fields_FWDDECL
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#endif
#undef IL2CPP_STRUCT_UberShaderDrivenComponent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderDrivenComponent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderDrivenComponent__Fields_FWDDECL)
#include <Modloader/app/structs/UberShaderDrivenComponent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderDrivenComponent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
