#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SavePedestalController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SavePedestalController_INITIALIZING
#if !defined(IL2CPP_STRUCT_SavePedestalController_DEFINED)
#include <Modloader/app/structs/SavePedestalController__Fields.h>
#if defined(IL2CPP_STRUCT_SavePedestalController__Fields_DEFINED)
#define IL2CPP_STRUCT_SavePedestalController_DEFINED
struct SavePedestalController__Class;
struct SavePedestalController {
    struct SavePedestalController__Class* klass;
    MonitorData* monitor;
    struct SavePedestalController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SavePedestalController_FWDDECL)
#define IL2CPP_STRUCT_SavePedestalController_FWDDECL
#include <Modloader/app/structs/SavePedestalController__Class.h>
#endif
#undef IL2CPP_STRUCT_SavePedestalController_INITIALIZING
#if !defined(IL2CPP_STRUCT_SavePedestalController_DEFINED) && !defined(IL2CPP_STRUCT_SavePedestalController_FWDDECL)
#include <Modloader/app/structs/SavePedestalController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SavePedestalController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
