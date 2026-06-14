#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PathFollowerVariedSpeed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PathFollowerVariedSpeed_INITIALIZING
#if !defined(IL2CPP_STRUCT_PathFollowerVariedSpeed_DEFINED)
#include <Modloader/app/structs/PathFollowerVariedSpeed__Fields.h>
#if defined(IL2CPP_STRUCT_PathFollowerVariedSpeed__Fields_DEFINED)
#define IL2CPP_STRUCT_PathFollowerVariedSpeed_DEFINED
struct PathFollowerVariedSpeed__Class;
struct PathFollowerVariedSpeed {
    struct PathFollowerVariedSpeed__Class* klass;
    MonitorData* monitor;
    struct PathFollowerVariedSpeed__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PathFollowerVariedSpeed_FWDDECL)
#define IL2CPP_STRUCT_PathFollowerVariedSpeed_FWDDECL
#include <Modloader/app/structs/PathFollowerVariedSpeed__Class.h>
#endif
#undef IL2CPP_STRUCT_PathFollowerVariedSpeed_INITIALIZING
#if !defined(IL2CPP_STRUCT_PathFollowerVariedSpeed_DEFINED) && !defined(IL2CPP_STRUCT_PathFollowerVariedSpeed_FWDDECL)
#include <Modloader/app/structs/PathFollowerVariedSpeed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PathFollowerVariedSpeed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
