#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XGameSaveProviderHandle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XGameSaveProviderHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_XGameSaveProviderHandle_DEFINED)
#include <Modloader/app/structs/XGameSaveProviderHandle__Fields.h>
#if defined(IL2CPP_STRUCT_XGameSaveProviderHandle__Fields_DEFINED)
#define IL2CPP_STRUCT_XGameSaveProviderHandle_DEFINED
struct XGameSaveProviderHandle__Class;
struct XGameSaveProviderHandle {
    struct XGameSaveProviderHandle__Class* klass;
    MonitorData* monitor;
    struct XGameSaveProviderHandle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XGameSaveProviderHandle_FWDDECL)
#define IL2CPP_STRUCT_XGameSaveProviderHandle_FWDDECL
#include <Modloader/app/structs/XGameSaveProviderHandle__Class.h>
#endif
#undef IL2CPP_STRUCT_XGameSaveProviderHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_XGameSaveProviderHandle_DEFINED) && !defined(IL2CPP_STRUCT_XGameSaveProviderHandle_FWDDECL)
#include <Modloader/app/structs/XGameSaveProviderHandle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XGameSaveProviderHandle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
