#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationPostprocessGroupManager_GroupState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationPostprocessGroupManager_GroupState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationPostprocessGroupManager_GroupState__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationPostprocessGroupManager_GroupState__Fields_DEFINED
struct AnimationPostprocessGroup;
struct __declspec(align(8)) AnimationPostprocessGroupManager_GroupState__Fields {
    struct AnimationPostprocessGroup* m_group;
    int32_t m_disableCounter;
    float m_currentWeight;
    float m_velocity;
    float m_currentSmoothTime;
};
#endif
#if !defined(IL2CPP_STRUCT_AnimationPostprocessGroupManager_GroupState__Fields_FWDDECL)
#define IL2CPP_STRUCT_AnimationPostprocessGroupManager_GroupState__Fields_FWDDECL
#include <Modloader/app/structs/AnimationPostprocessGroup.h>
#endif
#undef IL2CPP_STRUCT_AnimationPostprocessGroupManager_GroupState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationPostprocessGroupManager_GroupState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AnimationPostprocessGroupManager_GroupState__Fields_FWDDECL)
#include <Modloader/app/structs/AnimationPostprocessGroupManager_GroupState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationPostprocessGroupManager_GroupState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
