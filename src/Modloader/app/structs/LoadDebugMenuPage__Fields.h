#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoadDebugMenuPage__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoadDebugMenuPage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadDebugMenuPage__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_LoadDebugMenuPage__Fields_DEFINED
struct String;
struct List_1_LoadDebugMenuPage_DebugSaveInfo_;
struct LoadDebugMenuPage__Fields {
    struct MonoBehaviour__Fields _;
    struct String* m_name;
    struct List_1_LoadDebugMenuPage_DebugSaveInfo_* m_saves;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoadDebugMenuPage__Fields_FWDDECL)
#define IL2CPP_STRUCT_LoadDebugMenuPage__Fields_FWDDECL
#include <Modloader/app/structs/List_1_LoadDebugMenuPage_DebugSaveInfo_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_LoadDebugMenuPage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadDebugMenuPage__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LoadDebugMenuPage__Fields_FWDDECL)
#include <Modloader/app/structs/LoadDebugMenuPage__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoadDebugMenuPage__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
