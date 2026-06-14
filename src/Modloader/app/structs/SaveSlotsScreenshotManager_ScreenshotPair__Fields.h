#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SaveSlotsScreenshotManager_ScreenshotPair__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SaveSlotsScreenshotManager_ScreenshotPair__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSlotsScreenshotManager_ScreenshotPair__Fields_DEFINED)
#define IL2CPP_STRUCT_SaveSlotsScreenshotManager_ScreenshotPair__Fields_DEFINED
struct Texture;
struct GameWorldArea;
struct __declspec(align(8)) SaveSlotsScreenshotManager_ScreenshotPair__Fields {
    struct Texture* Texture;
    struct GameWorldArea* Area;
};
#endif
#if !defined(IL2CPP_STRUCT_SaveSlotsScreenshotManager_ScreenshotPair__Fields_FWDDECL)
#define IL2CPP_STRUCT_SaveSlotsScreenshotManager_ScreenshotPair__Fields_FWDDECL
#include <Modloader/app/structs/GameWorldArea.h>
#include <Modloader/app/structs/Texture.h>
#endif
#undef IL2CPP_STRUCT_SaveSlotsScreenshotManager_ScreenshotPair__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSlotsScreenshotManager_ScreenshotPair__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SaveSlotsScreenshotManager_ScreenshotPair__Fields_FWDDECL)
#include <Modloader/app/structs/SaveSlotsScreenshotManager_ScreenshotPair__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SaveSlotsScreenshotManager_ScreenshotPair__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
