#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FilteredRandomRange_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FilteredRandomRange_INITIALIZING
#if !defined(IL2CPP_STRUCT_FilteredRandomRange_DEFINED)
#include <Modloader/app/structs/FilteredRandomRange__Fields.h>
#if defined(IL2CPP_STRUCT_FilteredRandomRange__Fields_DEFINED)
#define IL2CPP_STRUCT_FilteredRandomRange_DEFINED
struct FilteredRandomRange__Class;
struct FilteredRandomRange {
    struct FilteredRandomRange__Class* klass;
    MonitorData* monitor;
    struct FilteredRandomRange__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FilteredRandomRange_FWDDECL)
#define IL2CPP_STRUCT_FilteredRandomRange_FWDDECL
#include <Modloader/app/structs/FilteredRandomRange__Class.h>
#endif
#undef IL2CPP_STRUCT_FilteredRandomRange_INITIALIZING
#if !defined(IL2CPP_STRUCT_FilteredRandomRange_DEFINED) && !defined(IL2CPP_STRUCT_FilteredRandomRange_FWDDECL)
#include <Modloader/app/structs/FilteredRandomRange.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FilteredRandomRange.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
