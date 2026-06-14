#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaitForSaveGameLogic_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaitForSaveGameLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForSaveGameLogic_DEFINED)
#include <Modloader/app/structs/WaitForSaveGameLogic__Fields.h>
#if defined(IL2CPP_STRUCT_WaitForSaveGameLogic__Fields_DEFINED)
#define IL2CPP_STRUCT_WaitForSaveGameLogic_DEFINED
struct WaitForSaveGameLogic__Class;
struct WaitForSaveGameLogic {
    struct WaitForSaveGameLogic__Class* klass;
    MonitorData* monitor;
    struct WaitForSaveGameLogic__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaitForSaveGameLogic_FWDDECL)
#define IL2CPP_STRUCT_WaitForSaveGameLogic_FWDDECL
#include <Modloader/app/structs/WaitForSaveGameLogic__Class.h>
#endif
#undef IL2CPP_STRUCT_WaitForSaveGameLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForSaveGameLogic_DEFINED) && !defined(IL2CPP_STRUCT_WaitForSaveGameLogic_FWDDECL)
#include <Modloader/app/structs/WaitForSaveGameLogic.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaitForSaveGameLogic.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
