#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyBabySandWorm_PositionHistoryEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyBabySandWorm_PositionHistoryEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyBabySandWorm_PositionHistoryEntry_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_LegacyBabySandWorm_PositionHistoryEntry_DEFINED
struct LegacyBabySandWorm_PositionHistoryEntry {
    struct Vector3 Position;
    float Time;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyBabySandWorm_PositionHistoryEntry_FWDDECL)
#define IL2CPP_STRUCT_LegacyBabySandWorm_PositionHistoryEntry_FWDDECL
#endif
#undef IL2CPP_STRUCT_LegacyBabySandWorm_PositionHistoryEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyBabySandWorm_PositionHistoryEntry_DEFINED) && !defined(IL2CPP_STRUCT_LegacyBabySandWorm_PositionHistoryEntry_FWDDECL)
#include <Modloader/app/structs/LegacyBabySandWorm_PositionHistoryEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyBabySandWorm_PositionHistoryEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
