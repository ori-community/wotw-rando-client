#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BuilderIntroNode__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BuilderIntroNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuilderIntroNode__Fields_DEFINED)
#include <Modloader/app/structs/TimelineNode__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineNode__Fields_DEFINED)
#define IL2CPP_STRUCT_BuilderIntroNode__Fields_DEFINED
struct BuilderIdle;
struct BuilderEntity;
struct MoonReference_1_Moon_Timeline_MoonTimeline_;
struct BuilderIntroNode__Fields {
    struct TimelineNode__Fields _;
    struct BuilderIdle* BuilderIdle;
    struct BuilderEntity* BuilderEntity;
    struct MoonReference_1_Moon_Timeline_MoonTimeline_* StandingIntro;
    struct MoonReference_1_Moon_Timeline_MoonTimeline_* SittingIntro;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BuilderIntroNode__Fields_FWDDECL)
#define IL2CPP_STRUCT_BuilderIntroNode__Fields_FWDDECL
#include <Modloader/app/structs/BuilderEntity.h>
#include <Modloader/app/structs/BuilderIdle.h>
#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_MoonTimeline_.h>
#endif
#undef IL2CPP_STRUCT_BuilderIntroNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuilderIntroNode__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BuilderIntroNode__Fields_FWDDECL)
#include <Modloader/app/structs/BuilderIntroNode__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BuilderIntroNode__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
