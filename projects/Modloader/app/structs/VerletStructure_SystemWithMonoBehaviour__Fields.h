#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletStructure_SystemWithMonoBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletStructure_SystemWithMonoBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletStructure_SystemWithMonoBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/TransformAccessArray.h>
#if defined(IL2CPP_STRUCT_TransformAccessArray_DEFINED)
#define IL2CPP_STRUCT_VerletStructure_SystemWithMonoBehaviour__Fields_DEFINED
struct VerletStructure__Array;
struct Boolean__Array;
struct __declspec(align(8)) VerletStructure_SystemWithMonoBehaviour__Fields {
    struct VerletStructure__Array* entities;
    struct TransformAccessArray transforms;
    struct Boolean__Array* shouldUpdates;
    bool needsPostJob;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerletStructure_SystemWithMonoBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_VerletStructure_SystemWithMonoBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/Boolean__Array.h>
#include <Modloader/app/structs/VerletStructure__Array.h>
#endif
#undef IL2CPP_STRUCT_VerletStructure_SystemWithMonoBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletStructure_SystemWithMonoBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VerletStructure_SystemWithMonoBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/VerletStructure_SystemWithMonoBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletStructure_SystemWithMonoBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
