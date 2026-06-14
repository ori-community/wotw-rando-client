#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlaymodeUpdateDelegate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlaymodeUpdateDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlaymodeUpdateDelegate_DEFINED)
#include <Modloader/app/structs/PlaymodeUpdateDelegate__Fields.h>
#if defined(IL2CPP_STRUCT_PlaymodeUpdateDelegate__Fields_DEFINED)
#define IL2CPP_STRUCT_PlaymodeUpdateDelegate_DEFINED
struct PlaymodeUpdateDelegate__Class;
struct PlaymodeUpdateDelegate {
    struct PlaymodeUpdateDelegate__Class* klass;
    MonitorData* monitor;
    struct PlaymodeUpdateDelegate__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlaymodeUpdateDelegate_FWDDECL)
#define IL2CPP_STRUCT_PlaymodeUpdateDelegate_FWDDECL
#include <Modloader/app/structs/PlaymodeUpdateDelegate__Class.h>
#endif
#undef IL2CPP_STRUCT_PlaymodeUpdateDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlaymodeUpdateDelegate_DEFINED) && !defined(IL2CPP_STRUCT_PlaymodeUpdateDelegate_FWDDECL)
#include <Modloader/app/structs/PlaymodeUpdateDelegate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlaymodeUpdateDelegate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
