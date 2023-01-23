#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ICameraTarget_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ICameraTarget_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICameraTarget_DEFINED)
#define IL2CPP_STRUCT_ICameraTarget_DEFINED
struct ICameraTarget__Class;
struct ICameraTarget {
    struct ICameraTarget__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ICameraTarget_FWDDECL)
#define IL2CPP_STRUCT_ICameraTarget_FWDDECL
#include <Modloader/app/structs/ICameraTarget__Class.h>
#endif
#undef IL2CPP_STRUCT_ICameraTarget_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICameraTarget_DEFINED) && !defined(IL2CPP_STRUCT_ICameraTarget_FWDDECL)
#include <Modloader/app/structs/ICameraTarget.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ICameraTarget.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
