#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IFrameData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IFrameData_INITIALIZING
#if !defined(IL2CPP_STRUCT_IFrameData_DEFINED)
#define IL2CPP_STRUCT_IFrameData_DEFINED
struct IFrameData__Class;
struct IFrameData {
    struct IFrameData__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IFrameData_FWDDECL)
#define IL2CPP_STRUCT_IFrameData_FWDDECL
#include <Modloader/app/structs/IFrameData__Class.h>
#endif
#undef IL2CPP_STRUCT_IFrameData_INITIALIZING
#if !defined(IL2CPP_STRUCT_IFrameData_DEFINED) && !defined(IL2CPP_STRUCT_IFrameData_FWDDECL)
#include <Modloader/app/structs/IFrameData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IFrameData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
