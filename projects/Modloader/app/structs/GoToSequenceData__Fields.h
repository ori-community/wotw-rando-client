#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GoToSequenceData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GoToSequenceData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GoToSequenceData__Fields_DEFINED)
#define IL2CPP_STRUCT_GoToSequenceData__Fields_DEFINED
struct String;
struct SceneMetaData;
struct List_1_System_String_;
struct __declspec(align(8)) GoToSequenceData__Fields {
    struct String* SequenceName;
    struct String* HelpText;
    struct SceneMetaData* Scene;
    struct List_1_System_String_* TriggerStrings;
    struct String* SceneName;
};
#endif
#if !defined(IL2CPP_STRUCT_GoToSequenceData__Fields_FWDDECL)
#define IL2CPP_STRUCT_GoToSequenceData__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/SceneMetaData.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_GoToSequenceData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GoToSequenceData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GoToSequenceData__Fields_FWDDECL)
#include <Modloader/app/structs/GoToSequenceData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GoToSequenceData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
