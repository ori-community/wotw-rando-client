#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxOneDVR_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxOneDVR_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneDVR_DEFINED)
#define IL2CPP_STRUCT_XboxOneDVR_DEFINED
struct XboxOneDVR__Class;
struct XboxOneDVR {
    struct XboxOneDVR__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_XboxOneDVR_FWDDECL)
#define IL2CPP_STRUCT_XboxOneDVR_FWDDECL
#include <Modloader/app/structs/XboxOneDVR__Class.h>
#endif
#undef IL2CPP_STRUCT_XboxOneDVR_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneDVR_DEFINED) && !defined(IL2CPP_STRUCT_XboxOneDVR_FWDDECL)
#include <Modloader/app/structs/XboxOneDVR.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxOneDVR.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
