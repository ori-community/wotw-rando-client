#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SandWormEntity__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SandWormEntity__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormEntity__StaticFields_DEFINED)
#define IL2CPP_STRUCT_SandWormEntity__StaticFields_DEFINED
struct List_1_Moon_Entity_;
struct List_1_UnityEngine_Vector3_;
struct SandWormEntity__StaticFields {
    float BoundingBoxSize;
    struct List_1_Moon_Entity_* s_registeredMortarEntities;
    struct List_1_UnityEngine_Vector3_* s_registeredMortarPositions;
    int32_t m_sandWormActiveBodyWaveCountPropId;
    int32_t m_sandWormActiveSquetchCountPropId;
    int32_t m_sandWormBodyWaveParams;
    int32_t m_sandWormSquetchParams;
};
#endif
#if !defined(IL2CPP_STRUCT_SandWormEntity__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SandWormEntity__StaticFields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_Entity_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#endif
#undef IL2CPP_STRUCT_SandWormEntity__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormEntity__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SandWormEntity__StaticFields_FWDDECL)
#include <Modloader/app/structs/SandWormEntity__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SandWormEntity__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
