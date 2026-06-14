#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKPostprocessPlayer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKPostprocessPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKPostprocessPlayer_DEFINED)
#include <Modloader/app/structs/IKPostprocessPlayer__Fields.h>
#if defined(IL2CPP_STRUCT_IKPostprocessPlayer__Fields_DEFINED)
#define IL2CPP_STRUCT_IKPostprocessPlayer_DEFINED
struct IKPostprocessPlayer__Class;
struct IKPostprocessPlayer {
    struct IKPostprocessPlayer__Class* klass;
    MonitorData* monitor;
    struct IKPostprocessPlayer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKPostprocessPlayer_FWDDECL)
#define IL2CPP_STRUCT_IKPostprocessPlayer_FWDDECL
#include <Modloader/app/structs/IKPostprocessPlayer__Class.h>
#endif
#undef IL2CPP_STRUCT_IKPostprocessPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKPostprocessPlayer_DEFINED) && !defined(IL2CPP_STRUCT_IKPostprocessPlayer_FWDDECL)
#include <Modloader/app/structs/IKPostprocessPlayer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKPostprocessPlayer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
