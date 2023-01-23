#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BatPeerDeath__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BatPeerDeath__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BatPeerDeath__Fields_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_BatPeerDeath__Fields_DEFINED
struct Damage;
struct __declspec(align(8)) BatPeerDeath__Fields {
    struct Vector2 position;
    struct Damage* damage;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BatPeerDeath__Fields_FWDDECL)
#define IL2CPP_STRUCT_BatPeerDeath__Fields_FWDDECL
#include <Modloader/app/structs/Damage.h>
#endif
#undef IL2CPP_STRUCT_BatPeerDeath__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BatPeerDeath__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BatPeerDeath__Fields_FWDDECL)
#include <Modloader/app/structs/BatPeerDeath__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BatPeerDeath__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
