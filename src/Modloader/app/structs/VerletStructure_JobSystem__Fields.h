#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletStructure_JobSystem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletStructure_JobSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletStructure_JobSystem__Fields_DEFINED)
#define IL2CPP_STRUCT_VerletStructure_JobSystem__Fields_DEFINED
struct VerletStructure__Array;
struct VerletStructure_SystemWithMonoBehaviour;
struct __declspec(align(8)) VerletStructure_JobSystem__Fields {
    struct VerletStructure__Array* entities;
    struct VerletStructure_SystemWithMonoBehaviour* systemWithMonoBehaviour;
};
#endif
#if !defined(IL2CPP_STRUCT_VerletStructure_JobSystem__Fields_FWDDECL)
#define IL2CPP_STRUCT_VerletStructure_JobSystem__Fields_FWDDECL
#include <Modloader/app/structs/VerletStructure_SystemWithMonoBehaviour.h>
#include <Modloader/app/structs/VerletStructure__Array.h>
#endif
#undef IL2CPP_STRUCT_VerletStructure_JobSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletStructure_JobSystem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VerletStructure_JobSystem__Fields_FWDDECL)
#include <Modloader/app/structs/VerletStructure_JobSystem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletStructure_JobSystem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
