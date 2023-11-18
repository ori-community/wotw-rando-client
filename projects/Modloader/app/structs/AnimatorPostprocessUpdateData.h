#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimatorPostprocessUpdateData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimatorPostprocessUpdateData_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatorPostprocessUpdateData_DEFINED)
#define IL2CPP_STRUCT_AnimatorPostprocessUpdateData_DEFINED
struct AnimatorPostprocessUpdateData {
    float Weight;
    float DeltaTime;
};
#endif
#if !defined(IL2CPP_STRUCT_AnimatorPostprocessUpdateData_FWDDECL)
#define IL2CPP_STRUCT_AnimatorPostprocessUpdateData_FWDDECL
#endif
#undef IL2CPP_STRUCT_AnimatorPostprocessUpdateData_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatorPostprocessUpdateData_DEFINED) && !defined(IL2CPP_STRUCT_AnimatorPostprocessUpdateData_FWDDECL)
#include <Modloader/app/structs/AnimatorPostprocessUpdateData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimatorPostprocessUpdateData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
