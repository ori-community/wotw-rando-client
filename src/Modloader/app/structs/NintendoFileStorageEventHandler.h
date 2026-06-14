#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NintendoFileStorageEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NintendoFileStorageEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_NintendoFileStorageEventHandler_DEFINED)
#include <Modloader/app/structs/NintendoFileStorageEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_NintendoFileStorageEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_NintendoFileStorageEventHandler_DEFINED
struct NintendoFileStorageEventHandler__Class;
struct NintendoFileStorageEventHandler {
    struct NintendoFileStorageEventHandler__Class* klass;
    MonitorData* monitor;
    struct NintendoFileStorageEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NintendoFileStorageEventHandler_FWDDECL)
#define IL2CPP_STRUCT_NintendoFileStorageEventHandler_FWDDECL
#include <Modloader/app/structs/NintendoFileStorageEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_NintendoFileStorageEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_NintendoFileStorageEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_NintendoFileStorageEventHandler_FWDDECL)
#include <Modloader/app/structs/NintendoFileStorageEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NintendoFileStorageEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
