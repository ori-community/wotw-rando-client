#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxOneDVR__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxOneDVR__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneDVR__StaticFields_DEFINED)
#define IL2CPP_STRUCT_XboxOneDVR__StaticFields_DEFINED
struct String;
struct XboxOneDVR__StaticFields {
    struct String* AIRSTRIKE_ID;
    struct String* BASHING_SPREE_ID;
    struct String* CRUSHED_RAM_ID;
    struct String* PROJECTILE_TAKEDOWN_ID;
    struct String* QUINTUPLE_JUMP_ID;
    struct String* SUPER_JUMP_ID;
    struct String* TRICKED_ENEMY_ID;
    struct String* ESCAPED_BOULDER_ID;
    bool _EnableDVR_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_XboxOneDVR__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_XboxOneDVR__StaticFields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_XboxOneDVR__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneDVR__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_XboxOneDVR__StaticFields_FWDDECL)
#include <Modloader/app/structs/XboxOneDVR__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxOneDVR__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
