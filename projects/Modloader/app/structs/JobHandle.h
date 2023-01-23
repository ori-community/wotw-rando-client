#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JobHandle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JobHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_JobHandle_DEFINED)
#define IL2CPP_STRUCT_JobHandle_DEFINED
struct JobHandle {
    void* jobGroup;
    int32_t version;
};
#endif
#if !defined(IL2CPP_STRUCT_JobHandle_FWDDECL)
#define IL2CPP_STRUCT_JobHandle_FWDDECL
#endif
#undef IL2CPP_STRUCT_JobHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_JobHandle_DEFINED) && !defined(IL2CPP_STRUCT_JobHandle_FWDDECL)
#include <Modloader/app/structs/JobHandle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JobHandle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
