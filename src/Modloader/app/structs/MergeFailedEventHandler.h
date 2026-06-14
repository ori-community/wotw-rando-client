#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MergeFailedEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MergeFailedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_MergeFailedEventHandler_DEFINED)
#include <Modloader/app/structs/MergeFailedEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_MergeFailedEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_MergeFailedEventHandler_DEFINED
struct MergeFailedEventHandler__Class;
struct MergeFailedEventHandler {
    struct MergeFailedEventHandler__Class* klass;
    MonitorData* monitor;
    struct MergeFailedEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MergeFailedEventHandler_FWDDECL)
#define IL2CPP_STRUCT_MergeFailedEventHandler_FWDDECL
#include <Modloader/app/structs/MergeFailedEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_MergeFailedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_MergeFailedEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_MergeFailedEventHandler_FWDDECL)
#include <Modloader/app/structs/MergeFailedEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MergeFailedEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
