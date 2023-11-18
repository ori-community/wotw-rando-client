#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TransformAnimatorSystem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TransformAnimatorSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformAnimatorSystem__Fields_DEFINED)
#define IL2CPP_STRUCT_TransformAnimatorSystem__Fields_DEFINED
struct List_1_System_Int32_;
struct Dictionary_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState_;
struct List_1_Moon_Timeline_TransformAnimatorSystem_ObjectState_;
struct __declspec(align(8)) TransformAnimatorSystem__Fields {
    struct List_1_System_Int32_* m_trackedObjectIDs;
    struct List_1_System_Int32_* m_trackedPhysicalObjectIDs;
    struct Dictionary_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState_* m_objectStateByID;
    struct List_1_Moon_Timeline_TransformAnimatorSystem_ObjectState_* m_objectStatePool;
};
#endif
#if !defined(IL2CPP_STRUCT_TransformAnimatorSystem__Fields_FWDDECL)
#define IL2CPP_STRUCT_TransformAnimatorSystem__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState_.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_TransformAnimatorSystem_ObjectState_.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#endif
#undef IL2CPP_STRUCT_TransformAnimatorSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformAnimatorSystem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TransformAnimatorSystem__Fields_FWDDECL)
#include <Modloader/app/structs/TransformAnimatorSystem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TransformAnimatorSystem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
