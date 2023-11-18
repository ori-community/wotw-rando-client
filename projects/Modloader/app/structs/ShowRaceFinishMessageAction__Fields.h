#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShowRaceFinishMessageAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShowRaceFinishMessageAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowRaceFinishMessageAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED)
#define IL2CPP_STRUCT_ShowRaceFinishMessageAction__Fields_DEFINED
struct String;
struct SoundProvider;
struct ShowRaceFinishMessageAction__Fields {
    struct ActionMethod__Fields _;
    struct String* Message;
    float Duration;
    struct SoundProvider* Sound;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShowRaceFinishMessageAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_ShowRaceFinishMessageAction__Fields_FWDDECL
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ShowRaceFinishMessageAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowRaceFinishMessageAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ShowRaceFinishMessageAction__Fields_FWDDECL)
#include <Modloader/app/structs/ShowRaceFinishMessageAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShowRaceFinishMessageAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
