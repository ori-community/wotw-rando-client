#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GRDKStorageHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GRDKStorageHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_GRDKStorageHandler_DEFINED)
#define IL2CPP_STRUCT_GRDKStorageHandler_DEFINED
struct GRDKStorageHandler__Class;
struct GRDKStorageHandler {
    struct GRDKStorageHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_GRDKStorageHandler_FWDDECL)
#define IL2CPP_STRUCT_GRDKStorageHandler_FWDDECL
#include <Modloader/app/structs/GRDKStorageHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_GRDKStorageHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_GRDKStorageHandler_DEFINED) && !defined(IL2CPP_STRUCT_GRDKStorageHandler_FWDDECL)
#include <Modloader/app/structs/GRDKStorageHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GRDKStorageHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
