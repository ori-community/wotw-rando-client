#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BoolStateMap_Mapping_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BoolStateMap_Mapping_INITIALIZING
#if !defined(IL2CPP_STRUCT_BoolStateMap_Mapping_DEFINED)
#define IL2CPP_STRUCT_BoolStateMap_Mapping_DEFINED
struct BoolStateMap_Mapping {
    int32_t m_index;
    bool m_value;
};
#endif
#if !defined(IL2CPP_STRUCT_BoolStateMap_Mapping_FWDDECL)
#define IL2CPP_STRUCT_BoolStateMap_Mapping_FWDDECL
#endif
#undef IL2CPP_STRUCT_BoolStateMap_Mapping_INITIALIZING
#if !defined(IL2CPP_STRUCT_BoolStateMap_Mapping_DEFINED) && !defined(IL2CPP_STRUCT_BoolStateMap_Mapping_FWDDECL)
#include <Modloader/app/structs/BoolStateMap_Mapping.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BoolStateMap_Mapping.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
