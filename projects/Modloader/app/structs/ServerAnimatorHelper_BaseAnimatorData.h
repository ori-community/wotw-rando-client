#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerAnimatorHelper_BaseAnimatorData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerAnimatorHelper_BaseAnimatorData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerAnimatorHelper_BaseAnimatorData_DEFINED)
#define IL2CPP_STRUCT_ServerAnimatorHelper_BaseAnimatorData_DEFINED
struct ServerAnimatorHelper_BaseAnimatorData {
    int32_t ExternalDriverGameObjectID;
    bool SampleOnStart;
    float TimeOffset;
    float Speed;
    bool PlayAtStart;
};
#endif
#if !defined(IL2CPP_STRUCT_ServerAnimatorHelper_BaseAnimatorData_FWDDECL)
#define IL2CPP_STRUCT_ServerAnimatorHelper_BaseAnimatorData_FWDDECL
#endif
#undef IL2CPP_STRUCT_ServerAnimatorHelper_BaseAnimatorData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerAnimatorHelper_BaseAnimatorData_DEFINED) && !defined(IL2CPP_STRUCT_ServerAnimatorHelper_BaseAnimatorData_FWDDECL)
#include <Modloader/app/structs/ServerAnimatorHelper_BaseAnimatorData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerAnimatorHelper_BaseAnimatorData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
