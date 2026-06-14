#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WotwWwiseBootstrapConfiguration__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WotwWwiseBootstrapConfiguration__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WotwWwiseBootstrapConfiguration__Fields_DEFINED)
#include <Modloader/app/structs/WwiseBootstrapConfiguration__Fields.h>
#if defined(IL2CPP_STRUCT_WwiseBootstrapConfiguration__Fields_DEFINED)
#define IL2CPP_STRUCT_WotwWwiseBootstrapConfiguration__Fields_DEFINED
struct SoundHost;
struct SoundListener;
struct WotwWwiseBootstrapConfiguration__Fields {
    struct WwiseBootstrapConfiguration__Fields _;
    struct SoundHost* DefaultHost;
    struct SoundListener* DefaultListener;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WotwWwiseBootstrapConfiguration__Fields_FWDDECL)
#define IL2CPP_STRUCT_WotwWwiseBootstrapConfiguration__Fields_FWDDECL
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/SoundListener.h>
#endif
#undef IL2CPP_STRUCT_WotwWwiseBootstrapConfiguration__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WotwWwiseBootstrapConfiguration__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WotwWwiseBootstrapConfiguration__Fields_FWDDECL)
#include <Modloader/app/structs/WotwWwiseBootstrapConfiguration__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WotwWwiseBootstrapConfiguration__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
