#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WorldMapLogic__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WorldMapLogic__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldMapLogic__StaticFields_DEFINED)
#define IL2CPP_STRUCT_WorldMapLogic__StaticFields_DEFINED
struct WorldMapLogic;
struct Vector2__Array;
struct WorldMapLogic__StaticFields {
    struct WorldMapLogic* Instance;
    struct Vector2__Array* m_samplePositions;
};
#endif
#if !defined(IL2CPP_STRUCT_WorldMapLogic__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_WorldMapLogic__StaticFields_FWDDECL
#include <Modloader/app/structs/Vector2__Array.h>
#include <Modloader/app/structs/WorldMapLogic.h>
#endif
#undef IL2CPP_STRUCT_WorldMapLogic__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldMapLogic__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_WorldMapLogic__StaticFields_FWDDECL)
#include <Modloader/app/structs/WorldMapLogic__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WorldMapLogic__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
