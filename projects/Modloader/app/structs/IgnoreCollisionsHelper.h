#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IgnoreCollisionsHelper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IgnoreCollisionsHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_IgnoreCollisionsHelper_DEFINED)
#define IL2CPP_STRUCT_IgnoreCollisionsHelper_DEFINED
struct HashSet_1_UnityEngine_Collider_;
struct Collider;
struct IgnoreCollisionsHelper {
    struct HashSet_1_UnityEngine_Collider_* IgnoredColliders;
    struct Collider* m_collider;
};
#endif
#if !defined(IL2CPP_STRUCT_IgnoreCollisionsHelper_FWDDECL)
#define IL2CPP_STRUCT_IgnoreCollisionsHelper_FWDDECL
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/HashSet_1_UnityEngine_Collider_.h>
#endif
#undef IL2CPP_STRUCT_IgnoreCollisionsHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_IgnoreCollisionsHelper_DEFINED) && !defined(IL2CPP_STRUCT_IgnoreCollisionsHelper_FWDDECL)
#include <Modloader/app/structs/IgnoreCollisionsHelper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IgnoreCollisionsHelper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
