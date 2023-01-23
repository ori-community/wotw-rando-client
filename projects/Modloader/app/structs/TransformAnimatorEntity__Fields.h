#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TransformAnimatorEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TransformAnimatorEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformAnimatorEntity__Fields_DEFINED)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#include <Modloader/app/structs/UpdateCategory__Enum.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_UpdateCategory__Enum_DEFINED)
#define IL2CPP_STRUCT_TransformAnimatorEntity__Fields_DEFINED
struct Rigidbody;
struct TransformAnimatorEntity__Fields {
    struct TimelineEntity__Fields _;
    bool AnimateDynamicBody;
    struct Rigidbody* m_rigidbody;
    UpdateCategory__Enum m_updateCategory;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TransformAnimatorEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_TransformAnimatorEntity__Fields_FWDDECL
#include <Modloader/app/structs/Rigidbody.h>
#endif
#undef IL2CPP_STRUCT_TransformAnimatorEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformAnimatorEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TransformAnimatorEntity__Fields_FWDDECL)
#include <Modloader/app/structs/TransformAnimatorEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TransformAnimatorEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
