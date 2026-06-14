#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletStructure_JobWithMonoBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletStructure_JobWithMonoBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletStructure_JobWithMonoBehaviour_DEFINED)
#define IL2CPP_STRUCT_VerletStructure_JobWithMonoBehaviour_DEFINED
struct VerletStructure__Array;
struct Boolean__Array;
struct VerletStructure_JobWithMonoBehaviour {
    struct VerletStructure__Array* entities;
    struct Boolean__Array* shouldUpdates;
    float dt;
};
#endif
#if !defined(IL2CPP_STRUCT_VerletStructure_JobWithMonoBehaviour_FWDDECL)
#define IL2CPP_STRUCT_VerletStructure_JobWithMonoBehaviour_FWDDECL
#include <Modloader/app/structs/Boolean__Array.h>
#include <Modloader/app/structs/VerletStructure__Array.h>
#endif
#undef IL2CPP_STRUCT_VerletStructure_JobWithMonoBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletStructure_JobWithMonoBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_VerletStructure_JobWithMonoBehaviour_FWDDECL)
#include <Modloader/app/structs/VerletStructure_JobWithMonoBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletStructure_JobWithMonoBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
