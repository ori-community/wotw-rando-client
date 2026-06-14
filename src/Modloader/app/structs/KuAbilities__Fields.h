#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KuAbilities__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KuAbilities__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuAbilities__Fields_DEFINED)
#define IL2CPP_STRUCT_KuAbilities__Fields_DEFINED
struct KuIdle;
struct KuFall;
struct KuGlide;
struct KuJump;
struct KuDoubleJump;
struct KuLand;
struct KuOriMounting;
struct KuRun;
struct KuCrouch;
struct KuLookUp;
struct KuFeatherFlap;
struct KuPushWall;
struct KuMeditateSpell;
struct KuBowAttack;
struct KuDash;
struct __declspec(align(8)) KuAbilities__Fields {
    struct KuIdle* Idle;
    struct KuFall* Fall;
    struct KuGlide* Glide;
    struct KuJump* Jump;
    struct KuDoubleJump* DoubleJump;
    struct KuLand* Land;
    struct KuOriMounting* Mounting;
    struct KuRun* Run;
    struct KuCrouch* Crouch;
    struct KuLookUp* LookUp;
    struct KuFeatherFlap* WindFeatherFlap;
    struct KuPushWall* PushWall;
    struct KuMeditateSpell* MeditateSpell;
    struct KuBowAttack* BowAttack;
    struct KuDash* Dash;
};
#endif
#if !defined(IL2CPP_STRUCT_KuAbilities__Fields_FWDDECL)
#define IL2CPP_STRUCT_KuAbilities__Fields_FWDDECL
#include <Modloader/app/structs/KuBowAttack.h>
#include <Modloader/app/structs/KuCrouch.h>
#include <Modloader/app/structs/KuDash.h>
#include <Modloader/app/structs/KuDoubleJump.h>
#include <Modloader/app/structs/KuFall.h>
#include <Modloader/app/structs/KuFeatherFlap.h>
#include <Modloader/app/structs/KuGlide.h>
#include <Modloader/app/structs/KuIdle.h>
#include <Modloader/app/structs/KuJump.h>
#include <Modloader/app/structs/KuLand.h>
#include <Modloader/app/structs/KuLookUp.h>
#include <Modloader/app/structs/KuMeditateSpell.h>
#include <Modloader/app/structs/KuOriMounting.h>
#include <Modloader/app/structs/KuPushWall.h>
#include <Modloader/app/structs/KuRun.h>
#endif
#undef IL2CPP_STRUCT_KuAbilities__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuAbilities__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KuAbilities__Fields_FWDDECL)
#include <Modloader/app/structs/KuAbilities__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KuAbilities__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
