#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoadDebugMenuPage_DebugSaveInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoadDebugMenuPage_DebugSaveInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadDebugMenuPage_DebugSaveInfo_DEFINED)
#define IL2CPP_STRUCT_LoadDebugMenuPage_DebugSaveInfo_DEFINED
struct String;
struct LoadDebugMenuPage_DebugSaveInfo {
    struct String* Area;
    struct String* SaveName;
    struct String* Path;
    int32_t SortingArea;
    int32_t SortingSave;
};
#endif
#if !defined(IL2CPP_STRUCT_LoadDebugMenuPage_DebugSaveInfo_FWDDECL)
#define IL2CPP_STRUCT_LoadDebugMenuPage_DebugSaveInfo_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_LoadDebugMenuPage_DebugSaveInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadDebugMenuPage_DebugSaveInfo_DEFINED) && !defined(IL2CPP_STRUCT_LoadDebugMenuPage_DebugSaveInfo_FWDDECL)
#include <Modloader/app/structs/LoadDebugMenuPage_DebugSaveInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoadDebugMenuPage_DebugSaveInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
