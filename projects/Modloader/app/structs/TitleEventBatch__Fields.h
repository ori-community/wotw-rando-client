#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TitleEventBatch__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TitleEventBatch__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleEventBatch__Fields_DEFINED)
#define IL2CPP_STRUCT_TitleEventBatch__Fields_DEFINED
struct String;
struct List_1_PlayFab_IPlayFabEmitEventRequest_;
struct __declspec(align(8)) TitleEventBatch__Fields {
    struct String* _TitleId_k__BackingField;
    struct List_1_PlayFab_IPlayFabEmitEventRequest_* _Events_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_TitleEventBatch__Fields_FWDDECL)
#define IL2CPP_STRUCT_TitleEventBatch__Fields_FWDDECL
#include <Modloader/app/structs/List_1_PlayFab_IPlayFabEmitEventRequest_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TitleEventBatch__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleEventBatch__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TitleEventBatch__Fields_FWDDECL)
#include <Modloader/app/structs/TitleEventBatch__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TitleEventBatch__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
