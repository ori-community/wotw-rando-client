#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoreNodeWisps__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoreNodeWisps__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoreNodeWisps__Fields_DEFINED)
#include <Modloader/app/structs/InteractionNode__Fields.h>
#if defined(IL2CPP_STRUCT_InteractionNode__Fields_DEFINED)
#define IL2CPP_STRUCT_LoreNodeWisps__Fields_DEFINED
struct MoonTimeline;
struct List_1_LoreNodeWisps_LoreStep_;
struct LoreNodeWisps__Fields {
    struct InteractionNode__Fields _;
    struct MoonTimeline* TalkTimeline;
    struct List_1_LoreNodeWisps_LoreStep_* Steps;
    int32_t m_retalkCounter;
    struct MoonTimeline* m_currentTimeline;
    int32_t m_updatedUberState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoreNodeWisps__Fields_FWDDECL)
#define IL2CPP_STRUCT_LoreNodeWisps__Fields_FWDDECL
#include <Modloader/app/structs/List_1_LoreNodeWisps_LoreStep_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_LoreNodeWisps__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoreNodeWisps__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LoreNodeWisps__Fields_FWDDECL)
#include <Modloader/app/structs/LoreNodeWisps__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoreNodeWisps__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
