#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberSpawnManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberSpawnManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberSpawnManager__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_UberSpawnManager__Fields_DEFINED
struct UberSpawnManager__Fields {
    struct MonoBehaviour__Fields _;
    float m_budgetSpentThisFrame;
    float m_budget;
    float m_startSpawn;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberSpawnManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberSpawnManager__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_UberSpawnManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberSpawnManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberSpawnManager__Fields_FWDDECL)
#include <Modloader/app/structs/UberSpawnManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberSpawnManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
