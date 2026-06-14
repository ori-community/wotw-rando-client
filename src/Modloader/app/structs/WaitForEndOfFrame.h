#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaitForEndOfFrame_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaitForEndOfFrame_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForEndOfFrame_DEFINED)
#define IL2CPP_STRUCT_WaitForEndOfFrame_DEFINED
struct WaitForEndOfFrame__Class;
struct WaitForEndOfFrame {
    struct WaitForEndOfFrame__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_WaitForEndOfFrame_FWDDECL)
#define IL2CPP_STRUCT_WaitForEndOfFrame_FWDDECL
#include <Modloader/app/structs/WaitForEndOfFrame__Class.h>
#endif
#undef IL2CPP_STRUCT_WaitForEndOfFrame_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForEndOfFrame_DEFINED) && !defined(IL2CPP_STRUCT_WaitForEndOfFrame_FWDDECL)
#include <Modloader/app/structs/WaitForEndOfFrame.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaitForEndOfFrame.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
