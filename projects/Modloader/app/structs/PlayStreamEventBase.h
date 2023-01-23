#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayStreamEventBase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayStreamEventBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayStreamEventBase_DEFINED)
#include <Modloader/app/structs/PlayStreamEventBase__Fields.h>
#if defined(IL2CPP_STRUCT_PlayStreamEventBase__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayStreamEventBase_DEFINED
struct PlayStreamEventBase__Class;
struct PlayStreamEventBase {
    struct PlayStreamEventBase__Class* klass;
    MonitorData* monitor;
    struct PlayStreamEventBase__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayStreamEventBase_FWDDECL)
#define IL2CPP_STRUCT_PlayStreamEventBase_FWDDECL
#include <Modloader/app/structs/PlayStreamEventBase__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayStreamEventBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayStreamEventBase_DEFINED) && !defined(IL2CPP_STRUCT_PlayStreamEventBase_FWDDECL)
#include <Modloader/app/structs/PlayStreamEventBase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayStreamEventBase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
