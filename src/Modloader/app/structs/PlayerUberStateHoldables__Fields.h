#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerUberStateHoldables__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerUberStateHoldables__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateHoldables__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerUberStateHoldables__Fields_DEFINED
struct Action;
struct __declspec(align(8)) PlayerUberStateHoldables__Fields {
    uint8_t State;
    struct Action* m_setDirtyCallback;
    bool m_foldout;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayerUberStateHoldables__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerUberStateHoldables__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#endif
#undef IL2CPP_STRUCT_PlayerUberStateHoldables__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateHoldables__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerUberStateHoldables__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerUberStateHoldables__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerUberStateHoldables__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
