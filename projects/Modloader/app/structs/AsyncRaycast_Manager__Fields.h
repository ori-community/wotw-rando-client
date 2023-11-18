#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsyncRaycast_Manager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsyncRaycast_Manager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncRaycast_Manager__Fields_DEFINED)
#include <Modloader/app/structs/JobHandle.h>
#include <Modloader/app/structs/NativeArray_1_UnityEngine_RaycastCommand_.h>
#include <Modloader/app/structs/NativeArray_1_UnityEngine_RaycastHit_.h>
#if defined(IL2CPP_STRUCT_NativeArray_1_UnityEngine_RaycastCommand__DEFINED) && defined(IL2CPP_STRUCT_NativeArray_1_UnityEngine_RaycastHit__DEFINED) && defined(IL2CPP_STRUCT_JobHandle_DEFINED)
#define IL2CPP_STRUCT_AsyncRaycast_Manager__Fields_DEFINED
struct List_1_AsyncRaycast_;
struct RaycastCommand__Array;
struct RaycastHit__Array;
struct AsyncRaycast__Array;
struct __declspec(align(8)) AsyncRaycast_Manager__Fields {
    struct List_1_AsyncRaycast_* m_instances;
    int32_t m_capacity;
    struct RaycastCommand__Array* m_cmd;
    struct RaycastHit__Array* m_hit;
    struct NativeArray_1_UnityEngine_RaycastCommand_ m_cmd_native;
    struct NativeArray_1_UnityEngine_RaycastHit_ m_hit_native;
    struct AsyncRaycast__Array* m_active;
    int32_t m_activeCount;
    struct JobHandle m_job;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AsyncRaycast_Manager__Fields_FWDDECL)
#define IL2CPP_STRUCT_AsyncRaycast_Manager__Fields_FWDDECL
#include <Modloader/app/structs/AsyncRaycast__Array.h>
#include <Modloader/app/structs/List_1_AsyncRaycast_.h>
#include <Modloader/app/structs/RaycastCommand__Array.h>
#include <Modloader/app/structs/RaycastHit__Array.h>
#endif
#undef IL2CPP_STRUCT_AsyncRaycast_Manager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncRaycast_Manager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AsyncRaycast_Manager__Fields_FWDDECL)
#include <Modloader/app/structs/AsyncRaycast_Manager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsyncRaycast_Manager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
