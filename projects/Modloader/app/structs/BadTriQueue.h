#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BadTriQueue_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BadTriQueue_INITIALIZING
#if !defined(IL2CPP_STRUCT_BadTriQueue_DEFINED)
#include <Modloader/app/structs/BadTriQueue__Fields.h>
#if defined(IL2CPP_STRUCT_BadTriQueue__Fields_DEFINED)
#define IL2CPP_STRUCT_BadTriQueue_DEFINED
struct BadTriQueue__Class;
struct BadTriQueue {
    struct BadTriQueue__Class* klass;
    MonitorData* monitor;
    struct BadTriQueue__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BadTriQueue_FWDDECL)
#define IL2CPP_STRUCT_BadTriQueue_FWDDECL
#include <Modloader/app/structs/BadTriQueue__Class.h>
#endif
#undef IL2CPP_STRUCT_BadTriQueue_INITIALIZING
#if !defined(IL2CPP_STRUCT_BadTriQueue_DEFINED) && !defined(IL2CPP_STRUCT_BadTriQueue_FWDDECL)
#include <Modloader/app/structs/BadTriQueue.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BadTriQueue.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
