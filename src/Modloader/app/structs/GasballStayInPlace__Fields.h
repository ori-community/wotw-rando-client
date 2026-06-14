#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GasballStayInPlace__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GasballStayInPlace__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GasballStayInPlace__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_GasballEntity___Fields.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_GasballEntity___Fields_DEFINED)
#define IL2CPP_STRUCT_GasballStayInPlace__Fields_DEFINED
struct AirEntityLocomotion;
struct GasballStayInPlace__Fields {
    struct EntityBehaviourNode_1_GasballEntity___Fields _;
    float SpeedDampening;
    struct AirEntityLocomotion* m_locomotion;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GasballStayInPlace__Fields_FWDDECL)
#define IL2CPP_STRUCT_GasballStayInPlace__Fields_FWDDECL
#include <Modloader/app/structs/AirEntityLocomotion.h>
#endif
#undef IL2CPP_STRUCT_GasballStayInPlace__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GasballStayInPlace__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GasballStayInPlace__Fields_FWDDECL)
#include <Modloader/app/structs/GasballStayInPlace__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GasballStayInPlace__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
