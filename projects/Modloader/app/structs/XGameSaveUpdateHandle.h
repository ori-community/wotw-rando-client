#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XGameSaveUpdateHandle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XGameSaveUpdateHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_XGameSaveUpdateHandle_DEFINED)
#include <Modloader/app/structs/XGameSaveUpdateHandle__Fields.h>
#if defined(IL2CPP_STRUCT_XGameSaveUpdateHandle__Fields_DEFINED)
#define IL2CPP_STRUCT_XGameSaveUpdateHandle_DEFINED
struct XGameSaveUpdateHandle__Class;
struct XGameSaveUpdateHandle {
    struct XGameSaveUpdateHandle__Class* klass;
    MonitorData* monitor;
    struct XGameSaveUpdateHandle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XGameSaveUpdateHandle_FWDDECL)
#define IL2CPP_STRUCT_XGameSaveUpdateHandle_FWDDECL
#include <Modloader/app/structs/XGameSaveUpdateHandle__Class.h>
#endif
#undef IL2CPP_STRUCT_XGameSaveUpdateHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_XGameSaveUpdateHandle_DEFINED) && !defined(IL2CPP_STRUCT_XGameSaveUpdateHandle_FWDDECL)
#include <Modloader/app/structs/XGameSaveUpdateHandle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XGameSaveUpdateHandle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
