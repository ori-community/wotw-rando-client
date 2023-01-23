#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetupStateModifierData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetupStateModifierData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetupStateModifierData__Fields_DEFINED)
#include <Modloader/app/structs/SetupStateModifierDataType__Enum.h>
#if defined(IL2CPP_STRUCT_SetupStateModifierDataType__Enum_DEFINED)
#define IL2CPP_STRUCT_SetupStateModifierData__Fields_DEFINED
struct DynamicDataResolver;
struct List_1_System_Boolean_;
struct List_1_System_Int32_;
struct List_1_System_Single_;
struct List_1_UnityEngine_Vector3_;
struct List_1_UnityEngine_Color_;
struct __declspec(align(8)) SetupStateModifierData__Fields {
    struct DynamicDataResolver* m_dataResolver;
    SetupStateModifierDataType__Enum m_modifierDataClassID;

    int32_t ModifierGUID;
    int32_t StateGUID;
    struct List_1_System_Boolean_* Booleans;
    struct List_1_System_Int32_* Ints;
    struct List_1_System_Single_* Floats;
    struct List_1_UnityEngine_Vector3_* Vectors;
    struct List_1_UnityEngine_Color_* Colors;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetupStateModifierData__Fields_FWDDECL)
#define IL2CPP_STRUCT_SetupStateModifierData__Fields_FWDDECL
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/List_1_System_Boolean_.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/List_1_System_Single_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Color_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#endif
#undef IL2CPP_STRUCT_SetupStateModifierData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetupStateModifierData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SetupStateModifierData__Fields_FWDDECL)
#include <Modloader/app/structs/SetupStateModifierData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetupStateModifierData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
