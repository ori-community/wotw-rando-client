#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeSlicedRigidbodyTask__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeSlicedRigidbodyTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSlicedRigidbodyTask__Fields_DEFINED)
#include <Modloader/app/structs/TimeSlicedCoroutineJob__Fields.h>
#if defined(IL2CPP_STRUCT_TimeSlicedCoroutineJob__Fields_DEFINED)
#define IL2CPP_STRUCT_TimeSlicedRigidbodyTask__Fields_DEFINED
struct PhysicalSystemManager;
struct TimeSlicedRigidbodyTask__Fields {
    struct TimeSlicedCoroutineJob__Fields _;
    struct PhysicalSystemManager* manager;
    bool m_activate;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimeSlicedRigidbodyTask__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimeSlicedRigidbodyTask__Fields_FWDDECL
#include <Modloader/app/structs/PhysicalSystemManager.h>
#endif
#undef IL2CPP_STRUCT_TimeSlicedRigidbodyTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSlicedRigidbodyTask__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimeSlicedRigidbodyTask__Fields_FWDDECL)
#include <Modloader/app/structs/TimeSlicedRigidbodyTask__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeSlicedRigidbodyTask__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
