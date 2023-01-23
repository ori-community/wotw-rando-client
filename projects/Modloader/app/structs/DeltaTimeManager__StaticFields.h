#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeltaTimeManager__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeltaTimeManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeltaTimeManager__StaticFields_DEFINED)
#include <Modloader/app/structs/PlayerLoopSystem.h>
#if defined(IL2CPP_STRUCT_PlayerLoopSystem_DEFINED)
#define IL2CPP_STRUCT_DeltaTimeManager__StaticFields_DEFINED
struct DeltaTimeManager;
struct DeltaTimeManager__StaticFields {
    int32_t HISTORY_LENGTH;
    struct DeltaTimeManager* Instance;
    struct PlayerLoopSystem m_afterTimeManagerPLS;
    struct PlayerLoopSystem m_beforeTimeManagerPLS;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeltaTimeManager__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_DeltaTimeManager__StaticFields_FWDDECL
#include <Modloader/app/structs/DeltaTimeManager.h>
#endif
#undef IL2CPP_STRUCT_DeltaTimeManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeltaTimeManager__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_DeltaTimeManager__StaticFields_FWDDECL)
#include <Modloader/app/structs/DeltaTimeManager__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeltaTimeManager__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
