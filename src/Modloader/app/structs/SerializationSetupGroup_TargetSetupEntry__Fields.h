#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SerializationSetupGroup_TargetSetupEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SerializationSetupGroup_TargetSetupEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationSetupGroup_TargetSetupEntry__Fields_DEFINED)
#include <Modloader/app/structs/SerializationSetupGroup_ClipType__Enum.h>
#if defined(IL2CPP_STRUCT_SerializationSetupGroup_ClipType__Enum_DEFINED)
#define IL2CPP_STRUCT_SerializationSetupGroup_TargetSetupEntry__Fields_DEFINED
struct GameObject;
struct List_1_UnityEngine_Component_;
struct List_1_System_Int32_;
struct __declspec(align(8)) SerializationSetupGroup_TargetSetupEntry__Fields {
    struct GameObject* Target;
    struct List_1_UnityEngine_Component_* DependentComponents;
    struct List_1_System_Int32_* ModifiersGuids;
    bool AutoAddToTimeline;
    SerializationSetupGroup_ClipType__Enum PositionClipType;

    SerializationSetupGroup_ClipType__Enum RotationClipType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SerializationSetupGroup_TargetSetupEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_SerializationSetupGroup_TargetSetupEntry__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Component_.h>
#endif
#undef IL2CPP_STRUCT_SerializationSetupGroup_TargetSetupEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationSetupGroup_TargetSetupEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SerializationSetupGroup_TargetSetupEntry__Fields_FWDDECL)
#include <Modloader/app/structs/SerializationSetupGroup_TargetSetupEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SerializationSetupGroup_TargetSetupEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
