#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TitleAddedCloudScriptEventData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TitleAddedCloudScriptEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleAddedCloudScriptEventData__Fields_DEFINED)
#include <Modloader/app/structs/PlayStreamEventBase__Fields.h>
#if defined(IL2CPP_STRUCT_PlayStreamEventBase__Fields_DEFINED)
#define IL2CPP_STRUCT_TitleAddedCloudScriptEventData__Fields_DEFINED
struct String;
struct List_1_System_String_;
struct TitleAddedCloudScriptEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String* DeveloperId;
    bool Published;
    int32_t Revision;
    struct List_1_System_String_* ScriptNames;
    struct String* UserId;
    int32_t Version;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TitleAddedCloudScriptEventData__Fields_FWDDECL)
#define IL2CPP_STRUCT_TitleAddedCloudScriptEventData__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TitleAddedCloudScriptEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleAddedCloudScriptEventData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TitleAddedCloudScriptEventData__Fields_FWDDECL)
#include <Modloader/app/structs/TitleAddedCloudScriptEventData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TitleAddedCloudScriptEventData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
