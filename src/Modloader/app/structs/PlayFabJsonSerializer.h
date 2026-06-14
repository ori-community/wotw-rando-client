#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabJsonSerializer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabJsonSerializer_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabJsonSerializer_DEFINED)
#include <Modloader/app/structs/PlayFabJsonSerializer__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabJsonSerializer__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabJsonSerializer_DEFINED
struct PlayFabJsonSerializer__Class;
struct PlayFabJsonSerializer {
    struct PlayFabJsonSerializer__Class* klass;
    MonitorData* monitor;
    struct PlayFabJsonSerializer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabJsonSerializer_FWDDECL)
#define IL2CPP_STRUCT_PlayFabJsonSerializer_FWDDECL
#include <Modloader/app/structs/PlayFabJsonSerializer__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabJsonSerializer_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabJsonSerializer_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabJsonSerializer_FWDDECL)
#include <Modloader/app/structs/PlayFabJsonSerializer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabJsonSerializer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
