#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationMaskNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationMaskNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationMaskNode_DEFINED)
#include <Modloader/app/structs/AnimationMaskNode__Fields.h>
#if defined(IL2CPP_STRUCT_AnimationMaskNode__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationMaskNode_DEFINED
struct AnimationMaskNode__Class;
struct AnimationMaskNode {
    struct AnimationMaskNode__Class* klass;
    MonitorData* monitor;
    struct AnimationMaskNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationMaskNode_FWDDECL)
#define IL2CPP_STRUCT_AnimationMaskNode_FWDDECL
#include <Modloader/app/structs/AnimationMaskNode__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimationMaskNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationMaskNode_DEFINED) && !defined(IL2CPP_STRUCT_AnimationMaskNode_FWDDECL)
#include <Modloader/app/structs/AnimationMaskNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationMaskNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
