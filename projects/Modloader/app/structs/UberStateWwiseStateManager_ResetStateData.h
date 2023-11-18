#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateWwiseStateManager_ResetStateData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateWwiseStateManager_ResetStateData_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateWwiseStateManager_ResetStateData_DEFINED)
#define IL2CPP_STRUCT_UberStateWwiseStateManager_ResetStateData_DEFINED
struct State;
struct UberStateWwiseStateManager_ResetStateData {
    struct State* State;
    uint32_t DefaultStateID;
};
#endif
#if !defined(IL2CPP_STRUCT_UberStateWwiseStateManager_ResetStateData_FWDDECL)
#define IL2CPP_STRUCT_UberStateWwiseStateManager_ResetStateData_FWDDECL
#include <Modloader/app/structs/State.h>
#endif
#undef IL2CPP_STRUCT_UberStateWwiseStateManager_ResetStateData_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateWwiseStateManager_ResetStateData_DEFINED) && !defined(IL2CPP_STRUCT_UberStateWwiseStateManager_ResetStateData_FWDDECL)
#include <Modloader/app/structs/UberStateWwiseStateManager_ResetStateData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateWwiseStateManager_ResetStateData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
