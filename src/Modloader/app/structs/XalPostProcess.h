#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XalPostProcess_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XalPostProcess_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalPostProcess_DEFINED)
#define IL2CPP_STRUCT_XalPostProcess_DEFINED
struct XalPostProcess__Class;
struct XalPostProcess {
    struct XalPostProcess__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_XalPostProcess_FWDDECL)
#define IL2CPP_STRUCT_XalPostProcess_FWDDECL
#include <Modloader/app/structs/XalPostProcess__Class.h>
#endif
#undef IL2CPP_STRUCT_XalPostProcess_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalPostProcess_DEFINED) && !defined(IL2CPP_STRUCT_XalPostProcess_FWDDECL)
#include <Modloader/app/structs/XalPostProcess.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XalPostProcess.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
