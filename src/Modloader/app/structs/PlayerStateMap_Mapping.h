#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerStateMap_Mapping_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerStateMap_Mapping_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerStateMap_Mapping_DEFINED)
#include <Modloader/app/structs/AbilityType__Enum.h>
#if defined(IL2CPP_STRUCT_AbilityType__Enum_DEFINED)
#define IL2CPP_STRUCT_PlayerStateMap_Mapping_DEFINED
struct PlayerStateMap_Mapping {
    int32_t m_index;
    int32_t m_matchType;
    AbilityType__Enum m_ability;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerStateMap_Mapping_FWDDECL)
#define IL2CPP_STRUCT_PlayerStateMap_Mapping_FWDDECL
#endif
#undef IL2CPP_STRUCT_PlayerStateMap_Mapping_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerStateMap_Mapping_DEFINED) && !defined(IL2CPP_STRUCT_PlayerStateMap_Mapping_FWDDECL)
#include <Modloader/app/structs/PlayerStateMap_Mapping.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerStateMap_Mapping.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
