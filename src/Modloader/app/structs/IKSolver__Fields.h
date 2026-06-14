#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKSolver__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKSolver__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolver__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_IKSolver__Fields_DEFINED
struct IKSolver_UpdateDelegate;
struct Transform;
struct __declspec(align(8)) IKSolver__Fields {
    struct Vector3 IKPosition;
    float IKPositionWeight;
    bool _initiated_k__BackingField;
    struct IKSolver_UpdateDelegate* OnPreInitiate;
    struct IKSolver_UpdateDelegate* OnPostInitiate;
    struct IKSolver_UpdateDelegate* OnPreUpdate;
    struct IKSolver_UpdateDelegate* OnPostUpdate;
    bool firstInitiation;
    struct Transform* root;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKSolver__Fields_FWDDECL)
#define IL2CPP_STRUCT_IKSolver__Fields_FWDDECL
#include <Modloader/app/structs/IKSolver_UpdateDelegate.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_IKSolver__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolver__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IKSolver__Fields_FWDDECL)
#include <Modloader/app/structs/IKSolver__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKSolver__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
