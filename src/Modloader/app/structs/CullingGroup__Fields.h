#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CullingGroup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CullingGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CullingGroup__Fields_DEFINED)
#define IL2CPP_STRUCT_CullingGroup__Fields_DEFINED
struct CullingGroup_StateChanged;
struct __declspec(align(8)) CullingGroup__Fields {
    void* m_Ptr;
    struct CullingGroup_StateChanged* m_OnStateChanged;
};
#endif
#if !defined(IL2CPP_STRUCT_CullingGroup__Fields_FWDDECL)
#define IL2CPP_STRUCT_CullingGroup__Fields_FWDDECL
#include <Modloader/app/structs/CullingGroup_StateChanged.h>
#endif
#undef IL2CPP_STRUCT_CullingGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CullingGroup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CullingGroup__Fields_FWDDECL)
#include <Modloader/app/structs/CullingGroup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CullingGroup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
