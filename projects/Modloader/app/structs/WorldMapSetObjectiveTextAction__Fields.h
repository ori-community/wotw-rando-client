#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WorldMapSetObjectiveTextAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WorldMapSetObjectiveTextAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldMapSetObjectiveTextAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED)
#define IL2CPP_STRUCT_WorldMapSetObjectiveTextAction__Fields_DEFINED
struct MessageProvider;
struct NewObjectiveMessageProvider;
struct WorldMapSetObjectiveTextAction__Fields {
    struct ActionMethod__Fields _;
    struct MessageProvider* ObjectiveText;
    struct NewObjectiveMessageProvider* NewObjectiveMessageProvider;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WorldMapSetObjectiveTextAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_WorldMapSetObjectiveTextAction__Fields_FWDDECL
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/NewObjectiveMessageProvider.h>
#endif
#undef IL2CPP_STRUCT_WorldMapSetObjectiveTextAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldMapSetObjectiveTextAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WorldMapSetObjectiveTextAction__Fields_FWDDECL)
#include <Modloader/app/structs/WorldMapSetObjectiveTextAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WorldMapSetObjectiveTextAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
