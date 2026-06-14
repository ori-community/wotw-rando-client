#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PersistencyTools__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PersistencyTools__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PersistencyTools__StaticFields_DEFINED)
#define IL2CPP_STRUCT_PersistencyTools__StaticFields_DEFINED
struct Action_2_UnityEngine_GameObject_UnityEngine_GameObject_;
struct Action_1_UnityEngine_GameObject_;
struct PersistencyTools__StaticFields {
    struct Action_2_UnityEngine_GameObject_UnityEngine_GameObject_* OnPrefabInstantiated;
    struct Action_1_UnityEngine_GameObject_* OnObjectIgnored;
};
#endif
#if !defined(IL2CPP_STRUCT_PersistencyTools__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_PersistencyTools__StaticFields_FWDDECL
#include <Modloader/app/structs/Action_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/Action_2_UnityEngine_GameObject_UnityEngine_GameObject_.h>
#endif
#undef IL2CPP_STRUCT_PersistencyTools__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PersistencyTools__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_PersistencyTools__StaticFields_FWDDECL)
#include <Modloader/app/structs/PersistencyTools__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PersistencyTools__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
