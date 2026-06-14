#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKSolver_Bone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKSolver_Bone_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolver_Bone_DEFINED)
#include <Modloader/app/structs/IKSolver_Bone__Fields.h>
#if defined(IL2CPP_STRUCT_IKSolver_Bone__Fields_DEFINED)
#define IL2CPP_STRUCT_IKSolver_Bone_DEFINED
struct IKSolver_Bone__Class;
struct IKSolver_Bone {
    struct IKSolver_Bone__Class* klass;
    MonitorData* monitor;
    struct IKSolver_Bone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKSolver_Bone_FWDDECL)
#define IL2CPP_STRUCT_IKSolver_Bone_FWDDECL
#include <Modloader/app/structs/IKSolver_Bone__Class.h>
#endif
#undef IL2CPP_STRUCT_IKSolver_Bone_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolver_Bone_DEFINED) && !defined(IL2CPP_STRUCT_IKSolver_Bone_FWDDECL)
#include <Modloader/app/structs/IKSolver_Bone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKSolver_Bone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
