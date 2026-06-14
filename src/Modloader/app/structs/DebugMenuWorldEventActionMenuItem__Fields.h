#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugMenuWorldEventActionMenuItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugMenuWorldEventActionMenuItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugMenuWorldEventActionMenuItem__Fields_DEFINED)
#include <Modloader/app/structs/ActionDebugMenuItem__Fields.h>
#if defined(IL2CPP_STRUCT_ActionDebugMenuItem__Fields_DEFINED)
#define IL2CPP_STRUCT_DebugMenuWorldEventActionMenuItem__Fields_DEFINED
struct WorldEvents;
struct DebugMenuWorldEventActionMenuItem__Fields {
    struct ActionDebugMenuItem__Fields _;
    struct WorldEvents* m_worldEvent;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugMenuWorldEventActionMenuItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_DebugMenuWorldEventActionMenuItem__Fields_FWDDECL
#include <Modloader/app/structs/WorldEvents.h>
#endif
#undef IL2CPP_STRUCT_DebugMenuWorldEventActionMenuItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugMenuWorldEventActionMenuItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DebugMenuWorldEventActionMenuItem__Fields_FWDDECL)
#include <Modloader/app/structs/DebugMenuWorldEventActionMenuItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugMenuWorldEventActionMenuItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
