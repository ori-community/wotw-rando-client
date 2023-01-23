#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InvisibleCheckpoint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InvisibleCheckpoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_InvisibleCheckpoint_DEFINED)
#include <Modloader/app/structs/InvisibleCheckpoint__Fields.h>
#if defined(IL2CPP_STRUCT_InvisibleCheckpoint__Fields_DEFINED)
#define IL2CPP_STRUCT_InvisibleCheckpoint_DEFINED
struct InvisibleCheckpoint__Class;
struct InvisibleCheckpoint {
    struct InvisibleCheckpoint__Class* klass;
    MonitorData* monitor;
    struct InvisibleCheckpoint__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InvisibleCheckpoint_FWDDECL)
#define IL2CPP_STRUCT_InvisibleCheckpoint_FWDDECL
#include <Modloader/app/structs/InvisibleCheckpoint__Class.h>
#endif
#undef IL2CPP_STRUCT_InvisibleCheckpoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_InvisibleCheckpoint_DEFINED) && !defined(IL2CPP_STRUCT_InvisibleCheckpoint_FWDDECL)
#include <Modloader/app/structs/InvisibleCheckpoint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InvisibleCheckpoint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
