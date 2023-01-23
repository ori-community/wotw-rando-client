#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecordEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecordEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecordEntry_DEFINED)
#include <Modloader/app/structs/RecordEntry__Fields.h>
#if defined(IL2CPP_STRUCT_RecordEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_RecordEntry_DEFINED
struct RecordEntry__Class;
struct RecordEntry {
    struct RecordEntry__Class* klass;
    MonitorData* monitor;
    struct RecordEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RecordEntry_FWDDECL)
#define IL2CPP_STRUCT_RecordEntry_FWDDECL
#include <Modloader/app/structs/RecordEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_RecordEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecordEntry_DEFINED) && !defined(IL2CPP_STRUCT_RecordEntry_FWDDECL)
#include <Modloader/app/structs/RecordEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecordEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
