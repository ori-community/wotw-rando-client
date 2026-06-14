#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SDK_XBL_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SDK_XBL_INITIALIZING
#if !defined(IL2CPP_STRUCT_SDK_XBL_DEFINED)
#define IL2CPP_STRUCT_SDK_XBL_DEFINED
struct SDK_XBL__Class;
struct SDK_XBL {
    struct SDK_XBL__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SDK_XBL_FWDDECL)
#define IL2CPP_STRUCT_SDK_XBL_FWDDECL
#include <Modloader/app/structs/SDK_XBL__Class.h>
#endif
#undef IL2CPP_STRUCT_SDK_XBL_INITIALIZING
#if !defined(IL2CPP_STRUCT_SDK_XBL_DEFINED) && !defined(IL2CPP_STRUCT_SDK_XBL_FWDDECL)
#include <Modloader/app/structs/SDK_XBL.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SDK_XBL.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
