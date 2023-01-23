#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoreNodeWisps_LoreStep__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoreNodeWisps_LoreStep__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoreNodeWisps_LoreStep__Fields_DEFINED)
#define IL2CPP_STRUCT_LoreNodeWisps_LoreStep__Fields_DEFINED
struct List_1_MessageProvider_;
struct MessageProvider;
struct Condition_1;
struct SerializedBooleanUberState;
struct __declspec(align(8)) LoreNodeWisps_LoreStep__Fields {
    struct List_1_MessageProvider_* RetalkMessages;
    struct MessageProvider* IntroMessage;
    struct Condition_1* CanPlay;
    struct SerializedBooleanUberState* PlayedOutIntro;
};
#endif
#if !defined(IL2CPP_STRUCT_LoreNodeWisps_LoreStep__Fields_FWDDECL)
#define IL2CPP_STRUCT_LoreNodeWisps_LoreStep__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/List_1_MessageProvider_.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#endif
#undef IL2CPP_STRUCT_LoreNodeWisps_LoreStep__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoreNodeWisps_LoreStep__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LoreNodeWisps_LoreStep__Fields_FWDDECL)
#include <Modloader/app/structs/LoreNodeWisps_LoreStep__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoreNodeWisps_LoreStep__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
