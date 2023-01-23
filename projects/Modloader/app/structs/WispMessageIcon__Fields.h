#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WispMessageIcon__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WispMessageIcon__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WispMessageIcon__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_WispMessageIcon__Fields_DEFINED
struct MeshRenderer;
struct MessageBox;
struct MessageProvider;
struct Texture2D;
struct UISoundSettingsAsset;
struct WispMessageIcon__Fields {
    struct MonoBehaviour__Fields _;
    struct MeshRenderer* IconRenderer;
    struct MessageBox* Description;
    struct MessageProvider* VoiceMessageProvider;
    struct MessageProvider* MemoryMessageProvider;
    struct MessageProvider* HeartMessageProvider;
    struct MessageProvider* EyesMessageProvider;
    struct MessageProvider* StrengthMessageProvider;
    struct MessageProvider* GoldenMessageProvider;
    struct Texture2D* VoiceIcon;
    struct Texture2D* MemoryIcon;
    struct Texture2D* HeartIcon;
    struct Texture2D* EyesIcon;
    struct Texture2D* StrengthIcon;
    struct Texture2D* GoldenIcon;
    struct MessageBox* Header;
    struct MessageProvider* WispHeader;
    struct MessageProvider* GoldenWispHeader;
    struct UISoundSettingsAsset* Sounds;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WispMessageIcon__Fields_FWDDECL)
#define IL2CPP_STRUCT_WispMessageIcon__Fields_FWDDECL
#include <Modloader/app/structs/MeshRenderer.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/UISoundSettingsAsset.h>
#endif
#undef IL2CPP_STRUCT_WispMessageIcon__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WispMessageIcon__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WispMessageIcon__Fields_FWDDECL)
#include <Modloader/app/structs/WispMessageIcon__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WispMessageIcon__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
