#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FBIKChain_ChildConstraint__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FBIKChain_ChildConstraint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FBIKChain_ChildConstraint__Fields_DEFINED)
#define IL2CPP_STRUCT_FBIKChain_ChildConstraint__Fields_DEFINED
struct Transform;
struct __declspec(align(8)) FBIKChain_ChildConstraint__Fields {
    float pushElasticity;
    float pullElasticity;
    struct Transform* bone1;
    struct Transform* bone2;
    float _nominalDistance_k__BackingField;
    bool _isRigid_k__BackingField;
    float crossFade;
    float inverseCrossFade;
    int32_t chain1Index;
    int32_t chain2Index;
};
#endif
#if !defined(IL2CPP_STRUCT_FBIKChain_ChildConstraint__Fields_FWDDECL)
#define IL2CPP_STRUCT_FBIKChain_ChildConstraint__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_FBIKChain_ChildConstraint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FBIKChain_ChildConstraint__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FBIKChain_ChildConstraint__Fields_FWDDECL)
#include <Modloader/app/structs/FBIKChain_ChildConstraint__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FBIKChain_ChildConstraint__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
