#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IWaterfallInteractionAgent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IWaterfallInteractionAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_IWaterfallInteractionAgent_DEFINED)
#define IL2CPP_STRUCT_IWaterfallInteractionAgent_DEFINED
struct IWaterfallInteractionAgent__Class;
struct IWaterfallInteractionAgent {
    struct IWaterfallInteractionAgent__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IWaterfallInteractionAgent_FWDDECL)
#define IL2CPP_STRUCT_IWaterfallInteractionAgent_FWDDECL
#include <Modloader/app/structs/IWaterfallInteractionAgent__Class.h>
#endif
#undef IL2CPP_STRUCT_IWaterfallInteractionAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_IWaterfallInteractionAgent_DEFINED) && !defined(IL2CPP_STRUCT_IWaterfallInteractionAgent_FWDDECL)
#include <Modloader/app/structs/IWaterfallInteractionAgent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IWaterfallInteractionAgent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
