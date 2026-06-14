#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShowSpiritTreeTextAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShowSpiritTreeTextAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowSpiritTreeTextAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_ShowSpiritTreeTextAction__Fields_DEFINED
struct Transform;
struct MessageProvider;
struct SoundProvider;
struct ShowSpiritTreeTextAction__Fields {
    struct ActionMethod__Fields _;
    struct Transform* Target;
    struct MessageProvider* Message;
    struct SoundProvider* Voice;
    float Duration;
    float Scale;
    bool ShowAsUi;
    struct Vector2 ScreenPosition;
    float ScreenWeight;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShowSpiritTreeTextAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_ShowSpiritTreeTextAction__Fields_FWDDECL
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_ShowSpiritTreeTextAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowSpiritTreeTextAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ShowSpiritTreeTextAction__Fields_FWDDECL)
#include <Modloader/app/structs/ShowSpiritTreeTextAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShowSpiritTreeTextAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
