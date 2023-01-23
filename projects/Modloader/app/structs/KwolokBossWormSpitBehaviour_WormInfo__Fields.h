#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KwolokBossWormSpitBehaviour_WormInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KwolokBossWormSpitBehaviour_WormInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossWormSpitBehaviour_WormInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_KwolokBossWormSpitBehaviour_WormInfo__Fields_DEFINED
struct GameObject;
struct Collider__Array;
struct __declspec(align(8)) KwolokBossWormSpitBehaviour_WormInfo__Fields {
    struct GameObject* Instance;
    struct Collider__Array* Colliders;
    bool CollisionEnabled;
    float Timer;
};
#endif
#if !defined(IL2CPP_STRUCT_KwolokBossWormSpitBehaviour_WormInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_KwolokBossWormSpitBehaviour_WormInfo__Fields_FWDDECL
#include <Modloader/app/structs/Collider__Array.h>
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_KwolokBossWormSpitBehaviour_WormInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossWormSpitBehaviour_WormInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KwolokBossWormSpitBehaviour_WormInfo__Fields_FWDDECL)
#include <Modloader/app/structs/KwolokBossWormSpitBehaviour_WormInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KwolokBossWormSpitBehaviour_WormInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
