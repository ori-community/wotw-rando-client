#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IntimidateNightcrawlerAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IntimidateNightcrawlerAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntimidateNightcrawlerAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED)
#define IL2CPP_STRUCT_IntimidateNightcrawlerAction__Fields_DEFINED
struct NightCrawlerRevealTorchTrigger;
struct ActionSequence;
struct IntimidateNightcrawlerAction__Fields {
    struct ActionMethod__Fields _;
    struct NightCrawlerRevealTorchTrigger* TorchTrigger;
    struct ActionSequence* ForthIntimidationActionSequence;
    int32_t m_intimidationCount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IntimidateNightcrawlerAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_IntimidateNightcrawlerAction__Fields_FWDDECL
#include <Modloader/app/structs/ActionSequence.h>
#include <Modloader/app/structs/NightCrawlerRevealTorchTrigger.h>
#endif
#undef IL2CPP_STRUCT_IntimidateNightcrawlerAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntimidateNightcrawlerAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IntimidateNightcrawlerAction__Fields_FWDDECL)
#include <Modloader/app/structs/IntimidateNightcrawlerAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IntimidateNightcrawlerAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
