#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PathFollower__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PathFollower__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PathFollower__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_PathFollower__Fields_DEFINED
struct LinearPath;
struct __declspec(align(8)) PathFollower__Fields {
    struct LinearPath* Path;
    int32_t Node;
    float Distance;
    float Speed;
    struct Vector3 m_position;
    float m_angle;
    bool _ReachedTheEnd_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PathFollower__Fields_FWDDECL)
#define IL2CPP_STRUCT_PathFollower__Fields_FWDDECL
#include <Modloader/app/structs/LinearPath.h>
#endif
#undef IL2CPP_STRUCT_PathFollower__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PathFollower__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PathFollower__Fields_FWDDECL)
#include <Modloader/app/structs/PathFollower__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PathFollower__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
