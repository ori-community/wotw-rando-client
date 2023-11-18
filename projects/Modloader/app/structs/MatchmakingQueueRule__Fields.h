#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MatchmakingQueueRule__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MatchmakingQueueRule__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakingQueueRule__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_UInt32_.h>
#include <Modloader/app/structs/RuleType__Enum.h>
#if defined(IL2CPP_STRUCT_Nullable_1_UInt32__DEFINED) && defined(IL2CPP_STRUCT_RuleType__Enum_DEFINED)
#define IL2CPP_STRUCT_MatchmakingQueueRule__Fields_DEFINED
struct String;
struct __declspec(align(8)) MatchmakingQueueRule__Fields {
    struct String* Name;
    struct Nullable_1_UInt32_ SecondsUntilOptional;
    RuleType__Enum Type;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MatchmakingQueueRule__Fields_FWDDECL)
#define IL2CPP_STRUCT_MatchmakingQueueRule__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MatchmakingQueueRule__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakingQueueRule__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MatchmakingQueueRule__Fields_FWDDECL)
#include <Modloader/app/structs/MatchmakingQueueRule__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MatchmakingQueueRule__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
