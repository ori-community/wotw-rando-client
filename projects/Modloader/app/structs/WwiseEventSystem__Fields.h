#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WwiseEventSystem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WwiseEventSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseEventSystem__Fields_DEFINED)
#define IL2CPP_STRUCT_WwiseEventSystem__Fields_DEFINED
struct WwiseEventSystem_SoundHandleProtected__Array;
struct Action_3_UInt32_UnityEngine_Vector3_Boolean_;
struct __declspec(align(8)) WwiseEventSystem__Fields {
    struct WwiseEventSystem_SoundHandleProtected__Array* m_handles;
    struct Action_3_UInt32_UnityEngine_Vector3_Boolean_* WwiseEventFired;
};
#endif
#if !defined(IL2CPP_STRUCT_WwiseEventSystem__Fields_FWDDECL)
#define IL2CPP_STRUCT_WwiseEventSystem__Fields_FWDDECL
#include <Modloader/app/structs/Action_3_UInt32_UnityEngine_Vector3_Boolean_.h>
#include <Modloader/app/structs/WwiseEventSystem_SoundHandleProtected__Array.h>
#endif
#undef IL2CPP_STRUCT_WwiseEventSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseEventSystem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WwiseEventSystem__Fields_FWDDECL)
#include <Modloader/app/structs/WwiseEventSystem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WwiseEventSystem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
