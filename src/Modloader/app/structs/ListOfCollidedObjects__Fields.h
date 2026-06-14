#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListOfCollidedObjects__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListOfCollidedObjects__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListOfCollidedObjects__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_ListOfCollidedObjects__Fields_DEFINED
struct List_1_UnityEngine_GameObject_;
struct Predicate_1_UnityEngine_GameObject_;
struct ListOfCollidedObjects__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_UnityEngine_GameObject_* TriggerObjects;
    struct List_1_UnityEngine_GameObject_* CollisionObjects;
    struct Predicate_1_UnityEngine_GameObject_* m_removeFunc;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ListOfCollidedObjects__Fields_FWDDECL)
#define IL2CPP_STRUCT_ListOfCollidedObjects__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/Predicate_1_UnityEngine_GameObject_.h>
#endif
#undef IL2CPP_STRUCT_ListOfCollidedObjects__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListOfCollidedObjects__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ListOfCollidedObjects__Fields_FWDDECL)
#include <Modloader/app/structs/ListOfCollidedObjects__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListOfCollidedObjects__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
