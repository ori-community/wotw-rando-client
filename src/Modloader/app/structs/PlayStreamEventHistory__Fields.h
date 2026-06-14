#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayStreamEventHistory__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayStreamEventHistory__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayStreamEventHistory__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayStreamEventHistory__Fields_DEFINED
struct String;
struct __declspec(align(8)) PlayStreamEventHistory__Fields {
    struct String* ParentEventId;
    struct String* ParentTriggerId;
    bool TriggeredEvents;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayStreamEventHistory__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayStreamEventHistory__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PlayStreamEventHistory__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayStreamEventHistory__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayStreamEventHistory__Fields_FWDDECL)
#include <Modloader/app/structs/PlayStreamEventHistory__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayStreamEventHistory__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
