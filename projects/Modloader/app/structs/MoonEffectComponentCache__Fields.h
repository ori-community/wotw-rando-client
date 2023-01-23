#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonEffectComponentCache__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonEffectComponentCache__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonEffectComponentCache__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonEffectComponentCache__Fields_DEFINED
struct GameObject;
struct Dictionary_2_System_Type_List_1_UnityEngine_Component_;
struct __declspec(align(8)) MoonEffectComponentCache__Fields {
    struct GameObject* m_target;
    struct Dictionary_2_System_Type_List_1_UnityEngine_Component_* m_componentCache;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonEffectComponentCache__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonEffectComponentCache__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Type_List_1_UnityEngine_Component_.h>
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_MoonEffectComponentCache__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonEffectComponentCache__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonEffectComponentCache__Fields_FWDDECL)
#include <Modloader/app/structs/MoonEffectComponentCache__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonEffectComponentCache__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
