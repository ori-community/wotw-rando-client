#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateSaveFileHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateSaveFileHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateSaveFileHandler_DEFINED)
#define IL2CPP_STRUCT_UberStateSaveFileHandler_DEFINED
struct UberStateSaveFileHandler__Class;
struct UberStateSaveFileHandler {
    struct UberStateSaveFileHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UberStateSaveFileHandler_FWDDECL)
#define IL2CPP_STRUCT_UberStateSaveFileHandler_FWDDECL
#include <Modloader/app/structs/UberStateSaveFileHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_UberStateSaveFileHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateSaveFileHandler_DEFINED) && !defined(IL2CPP_STRUCT_UberStateSaveFileHandler_FWDDECL)
#include <Modloader/app/structs/UberStateSaveFileHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateSaveFileHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
