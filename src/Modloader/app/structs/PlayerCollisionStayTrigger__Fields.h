#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerCollisionStayTrigger__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerCollisionStayTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerCollisionStayTrigger__Fields_DEFINED)
#include <Modloader/app/structs/LegacyTrigger__Fields.h>
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_LegacyTrigger__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_PlayerCollisionStayTrigger__Fields_DEFINED
struct PlayerCollisionStayTrigger__Fields {
    struct LegacyTrigger__Fields _;
    struct Rect m_bounds;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerCollisionStayTrigger__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerCollisionStayTrigger__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_PlayerCollisionStayTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerCollisionStayTrigger__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerCollisionStayTrigger__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerCollisionStayTrigger__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerCollisionStayTrigger__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
