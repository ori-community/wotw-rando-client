#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecorderIdUtility_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecorderIdUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderIdUtility_DEFINED)
#define IL2CPP_STRUCT_RecorderIdUtility_DEFINED
struct RecorderIdUtility__Class;
struct RecorderIdUtility {
    struct RecorderIdUtility__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_RecorderIdUtility_FWDDECL)
#define IL2CPP_STRUCT_RecorderIdUtility_FWDDECL
#include <Modloader/app/structs/RecorderIdUtility__Class.h>
#endif
#undef IL2CPP_STRUCT_RecorderIdUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderIdUtility_DEFINED) && !defined(IL2CPP_STRUCT_RecorderIdUtility_FWDDECL)
#include <Modloader/app/structs/RecorderIdUtility.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecorderIdUtility.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
