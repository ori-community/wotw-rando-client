#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaapiJsonRegisterObjArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaapiJsonRegisterObjArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaapiJsonRegisterObjArgs_DEFINED)
#include <Modloader/app/structs/WaapiJsonRegisterObjArgs__Fields.h>
#if defined(IL2CPP_STRUCT_WaapiJsonRegisterObjArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_WaapiJsonRegisterObjArgs_DEFINED
struct WaapiJsonRegisterObjArgs__Class;
struct WaapiJsonRegisterObjArgs {
    struct WaapiJsonRegisterObjArgs__Class* klass;
    MonitorData* monitor;
    struct WaapiJsonRegisterObjArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaapiJsonRegisterObjArgs_FWDDECL)
#define IL2CPP_STRUCT_WaapiJsonRegisterObjArgs_FWDDECL
#include <Modloader/app/structs/WaapiJsonRegisterObjArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_WaapiJsonRegisterObjArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaapiJsonRegisterObjArgs_DEFINED) && !defined(IL2CPP_STRUCT_WaapiJsonRegisterObjArgs_FWDDECL)
#include <Modloader/app/structs/WaapiJsonRegisterObjArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaapiJsonRegisterObjArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
