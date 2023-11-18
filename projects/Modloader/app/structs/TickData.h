#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TickData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TickData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TickData_DEFINED)
#define IL2CPP_STRUCT_TickData_DEFINED
struct BehaviourTree_1;
struct TickData {
    struct BehaviourTree_1* tree;
    float deltaTime;
};
#endif
#if !defined(IL2CPP_STRUCT_TickData_FWDDECL)
#define IL2CPP_STRUCT_TickData_FWDDECL
#include <Modloader/app/structs/BehaviourTree_1.h>
#endif
#undef IL2CPP_STRUCT_TickData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TickData_DEFINED) && !defined(IL2CPP_STRUCT_TickData_FWDDECL)
#include <Modloader/app/structs/TickData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TickData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
