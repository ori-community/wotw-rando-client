#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceSettings__Fields_DEFINED)
#include <Modloader/app/structs/RaceContentType__Enum.h>
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED) && defined(IL2CPP_STRUCT_RaceContentType__Enum_DEFINED)
#define IL2CPP_STRUCT_RaceSettings__Fields_DEFINED
struct String;
struct Texture2D;
struct MessageProvider;
struct SceneMetaData;
struct List_1_SceneMetaData_;
struct MoonReference_1_ISerializedUberState_;
struct MoonReference_1_SerializedIntUberState_;
struct RaceSettings__Fields {
    struct ScriptableObject__Fields _;
    RaceContentType__Enum type;

    bool IsPlayable;
    struct String* LeaderboardsID;
    bool SeparateDifficultyLeaderboards;
    struct Texture2D* RaceIcon;
    struct MessageProvider* Title;
    struct SceneMetaData* scene;
    struct SceneMetaData* overrideGoToScene;
    struct List_1_SceneMetaData_* RequiredScenes;
    struct MoonReference_1_ISerializedUberState_* Descriptor;
    int32_t MinDesiredValue;
    int32_t MaxDesiredValue;
    struct MoonReference_1_SerializedIntUberState_* LeaderboardPlaceState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_RaceSettings__Fields_FWDDECL
#include <Modloader/app/structs/List_1_SceneMetaData_.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MoonReference_1_ISerializedUberState_.h>
#include <Modloader/app/structs/MoonReference_1_SerializedIntUberState_.h>
#include <Modloader/app/structs/SceneMetaData.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_RaceSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RaceSettings__Fields_FWDDECL)
#include <Modloader/app/structs/RaceSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
