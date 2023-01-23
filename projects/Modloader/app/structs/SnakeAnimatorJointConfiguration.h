#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SnakeAnimatorJointConfiguration_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SnakeAnimatorJointConfiguration_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnakeAnimatorJointConfiguration_DEFINED)
#define IL2CPP_STRUCT_SnakeAnimatorJointConfiguration_DEFINED
struct Transform;
struct SnakeAnimatorJointConfiguration {
    struct Transform* Transform;
    float MaxLength;
    float MinLength;
};
#endif
#if !defined(IL2CPP_STRUCT_SnakeAnimatorJointConfiguration_FWDDECL)
#define IL2CPP_STRUCT_SnakeAnimatorJointConfiguration_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SnakeAnimatorJointConfiguration_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnakeAnimatorJointConfiguration_DEFINED) && !defined(IL2CPP_STRUCT_SnakeAnimatorJointConfiguration_FWDDECL)
#include <Modloader/app/structs/SnakeAnimatorJointConfiguration.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SnakeAnimatorJointConfiguration.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
