#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChainLevelAndCount_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChainLevelAndCount_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChainLevelAndCount_DEFINED)
#define IL2CPP_STRUCT_ChainLevelAndCount_DEFINED
struct ChainLevelAndCount {
    int32_t Level;
    int32_t Count;
};
#endif
#if !defined(IL2CPP_STRUCT_ChainLevelAndCount_FWDDECL)
#define IL2CPP_STRUCT_ChainLevelAndCount_FWDDECL
#endif
#undef IL2CPP_STRUCT_ChainLevelAndCount_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChainLevelAndCount_DEFINED) && !defined(IL2CPP_STRUCT_ChainLevelAndCount_FWDDECL)
#include <Modloader/app/structs/ChainLevelAndCount.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChainLevelAndCount.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
