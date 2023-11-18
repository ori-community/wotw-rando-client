#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaitNodeNonFixedRandom__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaitNodeNonFixedRandom__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitNodeNonFixedRandom__Fields_DEFINED)
#include <Modloader/app/structs/BehaviourNode__Fields.h>
#include <Modloader/app/structs/WaitNodeNonFixedRandom_WaitNodeReturnType__Enum.h>
#if defined(IL2CPP_STRUCT_BehaviourNode__Fields_DEFINED) && defined(IL2CPP_STRUCT_WaitNodeNonFixedRandom_WaitNodeReturnType__Enum_DEFINED)
#define IL2CPP_STRUCT_WaitNodeNonFixedRandom__Fields_DEFINED
struct MoonFloat;
struct WaitNodeNonFixedRandom__Fields {
    struct BehaviourNode__Fields _;
    struct MoonFloat* WaitTime;
    bool RandomValue;
    struct MoonFloat* MinTime;
    struct MoonFloat* MaxTime;
    WaitNodeNonFixedRandom_WaitNodeReturnType__Enum ReturnStatus;

    float m_timeEntered;
    float m_waitTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaitNodeNonFixedRandom__Fields_FWDDECL)
#define IL2CPP_STRUCT_WaitNodeNonFixedRandom__Fields_FWDDECL
#include <Modloader/app/structs/MoonFloat.h>
#endif
#undef IL2CPP_STRUCT_WaitNodeNonFixedRandom__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitNodeNonFixedRandom__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WaitNodeNonFixedRandom__Fields_FWDDECL)
#include <Modloader/app/structs/WaitNodeNonFixedRandom__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaitNodeNonFixedRandom__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
