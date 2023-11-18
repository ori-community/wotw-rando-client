#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RammingBehaviour_ExhaustState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RammingBehaviour_ExhaustState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingBehaviour_ExhaustState__Fields_DEFINED)
#include <Modloader/app/structs/RammingBehaviour_RamState__Fields.h>
#if defined(IL2CPP_STRUCT_RammingBehaviour_RamState__Fields_DEFINED)
#define IL2CPP_STRUCT_RammingBehaviour_ExhaustState__Fields_DEFINED
struct CharacterPlatformMovement;
struct RammingBehaviour_ExhaustState__Fields {
    struct RammingBehaviour_RamState__Fields _;
    struct CharacterPlatformMovement* m_platformMovement;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RammingBehaviour_ExhaustState__Fields_FWDDECL)
#define IL2CPP_STRUCT_RammingBehaviour_ExhaustState__Fields_FWDDECL
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#endif
#undef IL2CPP_STRUCT_RammingBehaviour_ExhaustState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingBehaviour_ExhaustState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RammingBehaviour_ExhaustState__Fields_FWDDECL)
#include <Modloader/app/structs/RammingBehaviour_ExhaustState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RammingBehaviour_ExhaustState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
