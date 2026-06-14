#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OpenVR_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OpenVR_INITIALIZING
#if !defined(IL2CPP_STRUCT_OpenVR_DEFINED)
#define IL2CPP_STRUCT_OpenVR_DEFINED
struct OpenVR__Class;
struct OpenVR {
    struct OpenVR__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_OpenVR_FWDDECL)
#define IL2CPP_STRUCT_OpenVR_FWDDECL
#include <Modloader/app/structs/OpenVR__Class.h>
#endif
#undef IL2CPP_STRUCT_OpenVR_INITIALIZING
#if !defined(IL2CPP_STRUCT_OpenVR_DEFINED) && !defined(IL2CPP_STRUCT_OpenVR_FWDDECL)
#include <Modloader/app/structs/OpenVR.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OpenVR.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
