#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XGameSaveContainerHandle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XGameSaveContainerHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_XGameSaveContainerHandle_DEFINED)
#include <Modloader/app/structs/XGameSaveContainerHandle__Fields.h>
#if defined(IL2CPP_STRUCT_XGameSaveContainerHandle__Fields_DEFINED)
#define IL2CPP_STRUCT_XGameSaveContainerHandle_DEFINED
struct XGameSaveContainerHandle__Class;
struct XGameSaveContainerHandle {
    struct XGameSaveContainerHandle__Class* klass;
    MonitorData* monitor;
    struct XGameSaveContainerHandle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XGameSaveContainerHandle_FWDDECL)
#define IL2CPP_STRUCT_XGameSaveContainerHandle_FWDDECL
#include <Modloader/app/structs/XGameSaveContainerHandle__Class.h>
#endif
#undef IL2CPP_STRUCT_XGameSaveContainerHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_XGameSaveContainerHandle_DEFINED) && !defined(IL2CPP_STRUCT_XGameSaveContainerHandle_FWDDECL)
#include <Modloader/app/structs/XGameSaveContainerHandle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XGameSaveContainerHandle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
