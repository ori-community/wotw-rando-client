#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WotwUberStateWwiseStateManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WotwUberStateWwiseStateManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WotwUberStateWwiseStateManager__Fields_DEFINED)
#include <Modloader/app/structs/UberStateWwiseStateManager__Fields.h>
#if defined(IL2CPP_STRUCT_UberStateWwiseStateManager__Fields_DEFINED)
#define IL2CPP_STRUCT_WotwUberStateWwiseStateManager__Fields_DEFINED
struct WotwUberStateToWwiseData;
struct PlayerUberStateDescriptor;
struct Boolean__Array;
struct WotwUberStateWwiseStateManager__Fields {
    struct UberStateWwiseStateManager__Fields _;
    struct WotwUberStateToWwiseData* WotwUberStateToWwiseData;
    struct PlayerUberStateDescriptor* PlayerUberStateDescriptor;
    struct Boolean__Array* m_alreadySetWotwStates;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WotwUberStateWwiseStateManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_WotwUberStateWwiseStateManager__Fields_FWDDECL
#include <Modloader/app/structs/Boolean__Array.h>
#include <Modloader/app/structs/PlayerUberStateDescriptor.h>
#include <Modloader/app/structs/WotwUberStateToWwiseData.h>
#endif
#undef IL2CPP_STRUCT_WotwUberStateWwiseStateManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WotwUberStateWwiseStateManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WotwUberStateWwiseStateManager__Fields_FWDDECL)
#include <Modloader/app/structs/WotwUberStateWwiseStateManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WotwUberStateWwiseStateManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
