#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShowHintAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShowHintAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowHintAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#include <Modloader/app/structs/HintLayer__Enum.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED) && defined(IL2CPP_STRUCT_HintLayer__Enum_DEFINED)
#define IL2CPP_STRUCT_ShowHintAction__Fields_DEFINED
struct Texture2D;
struct MessageProvider;
struct ShowHintAction__Fields {
    struct ActionMethod__Fields _;
    struct Texture2D* HintTexture;
    struct MessageProvider* HintMessage;
    HintLayer__Enum Layer;

    float Duration;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShowHintAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_ShowHintAction__Fields_FWDDECL
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_ShowHintAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowHintAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ShowHintAction__Fields_FWDDECL)
#include <Modloader/app/structs/ShowHintAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShowHintAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
