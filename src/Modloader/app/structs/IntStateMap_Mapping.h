#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IntStateMap_Mapping_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IntStateMap_Mapping_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntStateMap_Mapping_DEFINED)
#define IL2CPP_STRUCT_IntStateMap_Mapping_DEFINED
struct IntStateMap_Mapping {
    int32_t m_index;
    int32_t m_min;
    int32_t m_max;
};
#endif
#if !defined(IL2CPP_STRUCT_IntStateMap_Mapping_FWDDECL)
#define IL2CPP_STRUCT_IntStateMap_Mapping_FWDDECL
#endif
#undef IL2CPP_STRUCT_IntStateMap_Mapping_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntStateMap_Mapping_DEFINED) && !defined(IL2CPP_STRUCT_IntStateMap_Mapping_FWDDECL)
#include <Modloader/app/structs/IntStateMap_Mapping.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IntStateMap_Mapping.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
