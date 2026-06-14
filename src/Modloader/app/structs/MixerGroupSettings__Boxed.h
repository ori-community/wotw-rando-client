#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MixerGroupSettings__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MixerGroupSettings__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_MixerGroupSettings__Boxed_DEFINED)
#include <Modloader/app/structs/MixerGroupSettings.h>
#if defined(IL2CPP_STRUCT_MixerGroupSettings_DEFINED)
#define IL2CPP_STRUCT_MixerGroupSettings__Boxed_DEFINED
struct MixerGroupSettings__Class;
struct MixerGroupSettings__Boxed {
    struct MixerGroupSettings__Class* klass;
    MonitorData* monitor;
    struct MixerGroupSettings fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MixerGroupSettings__Boxed_FWDDECL)
#define IL2CPP_STRUCT_MixerGroupSettings__Boxed_FWDDECL
#include <Modloader/app/structs/MixerGroupSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_MixerGroupSettings__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_MixerGroupSettings__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_MixerGroupSettings__Boxed_FWDDECL)
#include <Modloader/app/structs/MixerGroupSettings__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MixerGroupSettings__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
