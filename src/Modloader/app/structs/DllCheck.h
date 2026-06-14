#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DllCheck_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DllCheck_INITIALIZING
#if !defined(IL2CPP_STRUCT_DllCheck_DEFINED)
#define IL2CPP_STRUCT_DllCheck_DEFINED
struct DllCheck__Class;
struct DllCheck {
    struct DllCheck__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DllCheck_FWDDECL)
#define IL2CPP_STRUCT_DllCheck_FWDDECL
#include <Modloader/app/structs/DllCheck__Class.h>
#endif
#undef IL2CPP_STRUCT_DllCheck_INITIALIZING
#if !defined(IL2CPP_STRUCT_DllCheck_DEFINED) && !defined(IL2CPP_STRUCT_DllCheck_FWDDECL)
#include <Modloader/app/structs/DllCheck.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DllCheck.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
