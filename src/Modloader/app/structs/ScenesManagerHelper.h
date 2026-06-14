#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScenesManagerHelper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScenesManagerHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenesManagerHelper_DEFINED)
#define IL2CPP_STRUCT_ScenesManagerHelper_DEFINED
struct ScenesManagerHelper__Class;
struct ScenesManagerHelper {
    struct ScenesManagerHelper__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ScenesManagerHelper_FWDDECL)
#define IL2CPP_STRUCT_ScenesManagerHelper_FWDDECL
#include <Modloader/app/structs/ScenesManagerHelper__Class.h>
#endif
#undef IL2CPP_STRUCT_ScenesManagerHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenesManagerHelper_DEFINED) && !defined(IL2CPP_STRUCT_ScenesManagerHelper_FWDDECL)
#include <Modloader/app/structs/ScenesManagerHelper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScenesManagerHelper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
