#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceDebug__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceDebug__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceDebug__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceDebug__Fields_DEFINED
struct String;
struct ReplayData;
struct RaceDebug__Fields {
    struct MonoBehaviour__Fields _;
    struct String* SiteId;
    struct String* PlayerId;
    struct ReplayData* LastDownloadedReplay;
    bool IsReady;
    struct String* Data;
    struct String* CompressedData;
    struct String* UncompressedBase64;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceDebug__Fields_FWDDECL)
#define IL2CPP_STRUCT_RaceDebug__Fields_FWDDECL
#include <Modloader/app/structs/ReplayData.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_RaceDebug__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceDebug__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RaceDebug__Fields_FWDDECL)
#include <Modloader/app/structs/RaceDebug__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceDebug__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
