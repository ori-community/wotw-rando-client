#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GLHelper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GLHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_GLHelper_DEFINED)
#define IL2CPP_STRUCT_GLHelper_DEFINED
struct GLHelper__Class;
struct GLHelper {
    struct GLHelper__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_GLHelper_FWDDECL)
#define IL2CPP_STRUCT_GLHelper_FWDDECL
#include <Modloader/app/structs/GLHelper__Class.h>
#endif
#undef IL2CPP_STRUCT_GLHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_GLHelper_DEFINED) && !defined(IL2CPP_STRUCT_GLHelper_FWDDECL)
#include <Modloader/app/structs/GLHelper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GLHelper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
