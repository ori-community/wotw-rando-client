#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DestroyManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DestroyManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DestroyManager__Fields_DEFINED)
#define IL2CPP_STRUCT_DestroyManager__Fields_DEFINED
struct Stack_1_UnityEngine_Transform_;
struct Stack_1_UnityEngine_Object_;
struct Stack_1_DestroyManager_CountAndCallback_;
struct List_1_DestroyManager_CountAndCallback_;
struct __declspec(align(8)) DestroyManager__Fields {
    struct Stack_1_UnityEngine_Transform_* m_destroy;
    struct Stack_1_UnityEngine_Object_* m_destroyResources;
    struct Stack_1_UnityEngine_Object_* m_unloadResources;
    struct Stack_1_DestroyManager_CountAndCallback_* availableCountAndCallbacks;
    struct List_1_DestroyManager_CountAndCallback_* activeTransformCountAndCallbacks;
    struct List_1_DestroyManager_CountAndCallback_* activeResourceCountAndCallbacks;
};
#endif
#if !defined(IL2CPP_STRUCT_DestroyManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_DestroyManager__Fields_FWDDECL
#include <Modloader/app/structs/List_1_DestroyManager_CountAndCallback_.h>
#include <Modloader/app/structs/Stack_1_DestroyManager_CountAndCallback_.h>
#include <Modloader/app/structs/Stack_1_UnityEngine_Object_.h>
#include <Modloader/app/structs/Stack_1_UnityEngine_Transform_.h>
#endif
#undef IL2CPP_STRUCT_DestroyManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DestroyManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DestroyManager__Fields_FWDDECL)
#include <Modloader/app/structs/DestroyManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DestroyManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
