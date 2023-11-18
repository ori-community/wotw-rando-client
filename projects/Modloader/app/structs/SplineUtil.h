#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SplineUtil_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SplineUtil_INITIALIZING
#if !defined(IL2CPP_STRUCT_SplineUtil_DEFINED)
#define IL2CPP_STRUCT_SplineUtil_DEFINED
struct SplineUtil__Class;
struct SplineUtil {
    struct SplineUtil__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SplineUtil_FWDDECL)
#define IL2CPP_STRUCT_SplineUtil_FWDDECL
#include <Modloader/app/structs/SplineUtil__Class.h>
#endif
#undef IL2CPP_STRUCT_SplineUtil_INITIALIZING
#if !defined(IL2CPP_STRUCT_SplineUtil_DEFINED) && !defined(IL2CPP_STRUCT_SplineUtil_FWDDECL)
#include <Modloader/app/structs/SplineUtil.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SplineUtil.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
