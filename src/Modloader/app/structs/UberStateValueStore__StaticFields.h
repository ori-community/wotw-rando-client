#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateValueStore__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateValueStore__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateValueStore__StaticFields_DEFINED)
#define IL2CPP_STRUCT_UberStateValueStore__StaticFields_DEFINED
struct UberStateValueStore__StaticFields {
    int32_t UBER_STATE_OWNER_VERSION;
    int32_t UBER_STATE_OWNER_BACKWARDS_COMPATABILITY_VERSION;
    bool DEBUG_UBER_STATE;
    int32_t INCREMENT_ID;
    bool URGENT_GAME_RESTART_NEEDED;
};
#endif
#if !defined(IL2CPP_STRUCT_UberStateValueStore__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_UberStateValueStore__StaticFields_FWDDECL
#endif
#undef IL2CPP_STRUCT_UberStateValueStore__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateValueStore__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_UberStateValueStore__StaticFields_FWDDECL)
#include <Modloader/app/structs/UberStateValueStore__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateValueStore__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
