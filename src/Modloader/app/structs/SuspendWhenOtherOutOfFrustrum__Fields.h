#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SuspendWhenOtherOutOfFrustrum__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SuspendWhenOtherOutOfFrustrum__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SuspendWhenOtherOutOfFrustrum__Fields_DEFINED)
#include <Modloader/app/structs/SuspendWhenOutOfFrustrumWithCondition__Fields.h>
#if defined(IL2CPP_STRUCT_SuspendWhenOutOfFrustrumWithCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_SuspendWhenOtherOutOfFrustrum__Fields_DEFINED
struct MoonReference_1_UnityEngine_Transform_;
struct Transform;
struct SuspendWhenOtherOutOfFrustrum__Fields {
    struct SuspendWhenOutOfFrustrumWithCondition__Fields _;
    struct MoonReference_1_UnityEngine_Transform_* Other;
    struct Transform* m_cachedTransform;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SuspendWhenOtherOutOfFrustrum__Fields_FWDDECL)
#define IL2CPP_STRUCT_SuspendWhenOtherOutOfFrustrum__Fields_FWDDECL
#include <Modloader/app/structs/MoonReference_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SuspendWhenOtherOutOfFrustrum__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SuspendWhenOtherOutOfFrustrum__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SuspendWhenOtherOutOfFrustrum__Fields_FWDDECL)
#include <Modloader/app/structs/SuspendWhenOtherOutOfFrustrum__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SuspendWhenOtherOutOfFrustrum__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
