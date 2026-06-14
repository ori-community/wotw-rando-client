#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITrialHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITrialHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITrialHandler_DEFINED)
#define IL2CPP_STRUCT_ITrialHandler_DEFINED
struct ITrialHandler__Class;
struct ITrialHandler {
    struct ITrialHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ITrialHandler_FWDDECL)
#define IL2CPP_STRUCT_ITrialHandler_FWDDECL
#include <Modloader/app/structs/ITrialHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_ITrialHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITrialHandler_DEFINED) && !defined(IL2CPP_STRUCT_ITrialHandler_FWDDECL)
#include <Modloader/app/structs/ITrialHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITrialHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
