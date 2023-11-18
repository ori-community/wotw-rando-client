#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GasballSpawnSetup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GasballSpawnSetup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GasballSpawnSetup__Fields_DEFINED)
#include <Modloader/app/structs/EntitySpawnSetup__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntitySpawnSetup__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_GasballSpawnSetup__Fields_DEFINED
struct GasballSpawnSetup__Fields {
    struct EntitySpawnSetup__Fields _;
    bool m_setSpawnOffsetManualy;
    struct Vector3 m_spawnOffset;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GasballSpawnSetup__Fields_FWDDECL)
#define IL2CPP_STRUCT_GasballSpawnSetup__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_GasballSpawnSetup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GasballSpawnSetup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GasballSpawnSetup__Fields_FWDDECL)
#include <Modloader/app/structs/GasballSpawnSetup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GasballSpawnSetup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
