#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoadingBootstrap__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoadingBootstrap__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadingBootstrap__StaticFields_DEFINED)
#define IL2CPP_STRUCT_LoadingBootstrap__StaticFields_DEFINED
struct LoadingBootstrap;
struct List_1_frameworks_loading_Prewarmers_IPrewarmOperation_;
struct Dictionary_2_UnityEngine_ThreadPriority_System_Double_;
struct LoadingBootstrap__StaticFields {
    struct LoadingBootstrap* Instance;
    bool IsPotato;
    bool UseNewPrewarming;
    struct List_1_frameworks_loading_Prewarmers_IPrewarmOperation_* s_prewarmOperations;
    bool m_playerLoopInitialized;
    struct Dictionary_2_UnityEngine_ThreadPriority_System_Double_* LoadingIntegrationTimesliceValues;
    bool IsXboxOneX;
    bool IsSeriesS;
    bool IsSeriesX;
};
#endif
#if !defined(IL2CPP_STRUCT_LoadingBootstrap__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_LoadingBootstrap__StaticFields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_UnityEngine_ThreadPriority_System_Double_.h>
#include <Modloader/app/structs/List_1_frameworks_loading_Prewarmers_IPrewarmOperation_.h>
#include <Modloader/app/structs/LoadingBootstrap.h>
#endif
#undef IL2CPP_STRUCT_LoadingBootstrap__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadingBootstrap__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_LoadingBootstrap__StaticFields_FWDDECL)
#include <Modloader/app/structs/LoadingBootstrap__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoadingBootstrap__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
