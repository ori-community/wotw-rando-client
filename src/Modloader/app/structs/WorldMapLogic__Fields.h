#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WorldMapLogic__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WorldMapLogic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldMapLogic__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_WorldMapLogic__Fields_DEFINED
struct CageStructureTool;
struct WorldMapLogic__Fields {
    struct MonoBehaviour__Fields _;
    int32_t m_fixedUpdateCounter;
    struct CageStructureTool* MapEnabledArea;
    struct Vector2 m_lastUpdatePosition2D;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WorldMapLogic__Fields_FWDDECL)
#define IL2CPP_STRUCT_WorldMapLogic__Fields_FWDDECL
#include <Modloader/app/structs/CageStructureTool.h>
#endif
#undef IL2CPP_STRUCT_WorldMapLogic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldMapLogic__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WorldMapLogic__Fields_FWDDECL)
#include <Modloader/app/structs/WorldMapLogic__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WorldMapLogic__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
