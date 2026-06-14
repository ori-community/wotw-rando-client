#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DoorSetupData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DoorSetupData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoorSetupData__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_DoorSetupData__Fields_DEFINED
struct MoonTimeline;
struct __declspec(align(8)) DoorSetupData__Fields {
    struct MoonTimeline* m_transition;
    float m_desiredValue;
    struct Vector3 DoorPosition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DoorSetupData__Fields_FWDDECL)
#define IL2CPP_STRUCT_DoorSetupData__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_DoorSetupData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoorSetupData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DoorSetupData__Fields_FWDDECL)
#include <Modloader/app/structs/DoorSetupData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DoorSetupData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
