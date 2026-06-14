#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActivateAnimatorSystem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActivateAnimatorSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivateAnimatorSystem__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_ActivateAnimatorSystem__Fields_DEFINED
struct List_1_System_Int32_;
struct Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_;
struct ActivateAnimatorSystem__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_System_Int32_* m_trackedObjectIDs;
    struct Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_* m_stateByObjectId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActivateAnimatorSystem__Fields_FWDDECL)
#define IL2CPP_STRUCT_ActivateAnimatorSystem__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#endif
#undef IL2CPP_STRUCT_ActivateAnimatorSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivateAnimatorSystem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ActivateAnimatorSystem__Fields_FWDDECL)
#include <Modloader/app/structs/ActivateAnimatorSystem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActivateAnimatorSystem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
