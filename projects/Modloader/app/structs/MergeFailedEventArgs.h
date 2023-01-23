#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MergeFailedEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MergeFailedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_MergeFailedEventArgs_DEFINED)
#include <Modloader/app/structs/MergeFailedEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_MergeFailedEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_MergeFailedEventArgs_DEFINED
struct MergeFailedEventArgs__Class;
struct MergeFailedEventArgs {
    struct MergeFailedEventArgs__Class* klass;
    MonitorData* monitor;
    struct MergeFailedEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MergeFailedEventArgs_FWDDECL)
#define IL2CPP_STRUCT_MergeFailedEventArgs_FWDDECL
#include <Modloader/app/structs/MergeFailedEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_MergeFailedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_MergeFailedEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_MergeFailedEventArgs_FWDDECL)
#include <Modloader/app/structs/MergeFailedEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MergeFailedEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
