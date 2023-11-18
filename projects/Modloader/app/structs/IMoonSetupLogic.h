#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IMoonSetupLogic_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IMoonSetupLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMoonSetupLogic_DEFINED)
#define IL2CPP_STRUCT_IMoonSetupLogic_DEFINED
struct IMoonSetupLogic__Class;
struct IMoonSetupLogic {
    struct IMoonSetupLogic__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IMoonSetupLogic_FWDDECL)
#define IL2CPP_STRUCT_IMoonSetupLogic_FWDDECL
#include <Modloader/app/structs/IMoonSetupLogic__Class.h>
#endif
#undef IL2CPP_STRUCT_IMoonSetupLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMoonSetupLogic_DEFINED) && !defined(IL2CPP_STRUCT_IMoonSetupLogic_FWDDECL)
#include <Modloader/app/structs/IMoonSetupLogic.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IMoonSetupLogic.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
