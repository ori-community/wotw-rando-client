#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WwiseBootstrap__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WwiseBootstrap__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseBootstrap__StaticFields_DEFINED)
#define IL2CPP_STRUCT_WwiseBootstrap__StaticFields_DEFINED
struct Action;
struct WwiseBootstrap__StaticFields {
    bool _IsProfilerRecording_k__BackingField;
    bool m_muteRequestedThisFrame;
    bool m_masterVolumeMuted;
    bool CallbackManagerStarted;
    bool _WwiseDisabled_k__BackingField;
    struct Action* WwiseRestartedCallback;
};
#endif
#if !defined(IL2CPP_STRUCT_WwiseBootstrap__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_WwiseBootstrap__StaticFields_FWDDECL
#include <Modloader/app/structs/Action.h>
#endif
#undef IL2CPP_STRUCT_WwiseBootstrap__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseBootstrap__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_WwiseBootstrap__StaticFields_FWDDECL)
#include <Modloader/app/structs/WwiseBootstrap__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WwiseBootstrap__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
