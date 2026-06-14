#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecordXboxDVRAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecordXboxDVRAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecordXboxDVRAction_DEFINED)
#include <Modloader/app/structs/RecordXboxDVRAction__Fields.h>
#if defined(IL2CPP_STRUCT_RecordXboxDVRAction__Fields_DEFINED)
#define IL2CPP_STRUCT_RecordXboxDVRAction_DEFINED
struct RecordXboxDVRAction__Class;
struct RecordXboxDVRAction {
    struct RecordXboxDVRAction__Class* klass;
    MonitorData* monitor;
    struct RecordXboxDVRAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RecordXboxDVRAction_FWDDECL)
#define IL2CPP_STRUCT_RecordXboxDVRAction_FWDDECL
#include <Modloader/app/structs/RecordXboxDVRAction__Class.h>
#endif
#undef IL2CPP_STRUCT_RecordXboxDVRAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecordXboxDVRAction_DEFINED) && !defined(IL2CPP_STRUCT_RecordXboxDVRAction_FWDDECL)
#include <Modloader/app/structs/RecordXboxDVRAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecordXboxDVRAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
