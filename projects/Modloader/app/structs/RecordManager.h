#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecordManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecordManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecordManager_DEFINED)
#include <Modloader/app/structs/RecordManager__Fields.h>
#if defined(IL2CPP_STRUCT_RecordManager__Fields_DEFINED)
#define IL2CPP_STRUCT_RecordManager_DEFINED
struct RecordManager__Class;
struct RecordManager {
    struct RecordManager__Class* klass;
    MonitorData* monitor;
    struct RecordManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RecordManager_FWDDECL)
#define IL2CPP_STRUCT_RecordManager_FWDDECL
#include <Modloader/app/structs/RecordManager__Class.h>
#endif
#undef IL2CPP_STRUCT_RecordManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecordManager_DEFINED) && !defined(IL2CPP_STRUCT_RecordManager_FWDDECL)
#include <Modloader/app/structs/RecordManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecordManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
