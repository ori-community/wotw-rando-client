#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceRunState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceRunState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceRunState__Fields_DEFINED)
#include <Modloader/app/structs/RaceBaseState__Fields.h>
#if defined(IL2CPP_STRUCT_RaceBaseState__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceRunState__Fields_DEFINED
struct RaceTargetIndicator;
struct RaceRunState__Fields {
    struct RaceBaseState__Fields _;
    bool m_insideRaceArea;
    float m_timeSinceLeftRaceArea;
    struct RaceTargetIndicator* m_targetIndicator;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceRunState__Fields_FWDDECL)
#define IL2CPP_STRUCT_RaceRunState__Fields_FWDDECL
#include <Modloader/app/structs/RaceTargetIndicator.h>
#endif
#undef IL2CPP_STRUCT_RaceRunState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceRunState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RaceRunState__Fields_FWDDECL)
#include <Modloader/app/structs/RaceRunState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceRunState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
