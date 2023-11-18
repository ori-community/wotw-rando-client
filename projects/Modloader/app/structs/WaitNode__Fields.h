#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaitNode__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaitNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitNode__Fields_DEFINED)
#include <Modloader/app/structs/BehaviourNode__Fields.h>
#include <Modloader/app/structs/WaitNode_WaitNodeReturnType__Enum.h>
#if defined(IL2CPP_STRUCT_BehaviourNode__Fields_DEFINED) && defined(IL2CPP_STRUCT_WaitNode_WaitNodeReturnType__Enum_DEFINED)
#define IL2CPP_STRUCT_WaitNode__Fields_DEFINED
struct MoonFloat;
struct WaitNode__Fields {
    struct BehaviourNode__Fields _;
    struct MoonFloat* WaitTime;
    bool RandomValue;
    bool UsePositionBasedRandomValue;
    struct MoonFloat* MinTime;
    struct MoonFloat* MaxTime;
    WaitNode_WaitNodeReturnType__Enum ReturnStatus;

    float m_timeEntered;
    float m_waitTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaitNode__Fields_FWDDECL)
#define IL2CPP_STRUCT_WaitNode__Fields_FWDDECL
#include <Modloader/app/structs/MoonFloat.h>
#endif
#undef IL2CPP_STRUCT_WaitNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitNode__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WaitNode__Fields_FWDDECL)
#include <Modloader/app/structs/WaitNode__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaitNode__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
