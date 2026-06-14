#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MapMakerDidNotBuyBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MapMakerDidNotBuyBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MapMakerDidNotBuyBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode__Fields.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode__Fields_DEFINED)
#define IL2CPP_STRUCT_MapMakerDidNotBuyBehaviour__Fields_DEFINED
struct CartographerNPC;
struct MapMakerDidNotBuyBehaviour__Fields {
    struct EntityBehaviourNode__Fields _;
    struct CartographerNPC* m_npc;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MapMakerDidNotBuyBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_MapMakerDidNotBuyBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/CartographerNPC.h>
#endif
#undef IL2CPP_STRUCT_MapMakerDidNotBuyBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MapMakerDidNotBuyBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MapMakerDidNotBuyBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/MapMakerDidNotBuyBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MapMakerDidNotBuyBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
