#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetupStateModifier__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetupStateModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetupStateModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_SetupStateModifier__Fields_DEFINED
struct MoonReference_1_UnityEngine_GameObject_;
struct List_1_SetupStateModifierData_;
struct __declspec(align(8)) SetupStateModifier__Fields {
    int32_t ModifierGUID;
    struct MoonReference_1_UnityEngine_GameObject_* Target;
    struct List_1_SetupStateModifierData_* m_uberStateModifierDatas;
};
#endif
#if !defined(IL2CPP_STRUCT_SetupStateModifier__Fields_FWDDECL)
#define IL2CPP_STRUCT_SetupStateModifier__Fields_FWDDECL
#include <Modloader/app/structs/List_1_SetupStateModifierData_.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_GameObject_.h>
#endif
#undef IL2CPP_STRUCT_SetupStateModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetupStateModifier__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SetupStateModifier__Fields_FWDDECL)
#include <Modloader/app/structs/SetupStateModifier__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetupStateModifier__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
