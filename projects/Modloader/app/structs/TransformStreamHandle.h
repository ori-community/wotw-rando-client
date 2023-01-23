#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TransformStreamHandle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TransformStreamHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformStreamHandle_DEFINED)
#define IL2CPP_STRUCT_TransformStreamHandle_DEFINED
struct TransformStreamHandle {
    uint32_t m_AnimatorBindingsVersion;
    int32_t handleIndex;
    int32_t skeletonIndex;
};
#endif
#if !defined(IL2CPP_STRUCT_TransformStreamHandle_FWDDECL)
#define IL2CPP_STRUCT_TransformStreamHandle_FWDDECL
#endif
#undef IL2CPP_STRUCT_TransformStreamHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformStreamHandle_DEFINED) && !defined(IL2CPP_STRUCT_TransformStreamHandle_FWDDECL)
#include <Modloader/app/structs/TransformStreamHandle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TransformStreamHandle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
