#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecordableObject_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecordableObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecordableObject_DEFINED)
#include <Modloader/app/structs/RecordableObject__Fields.h>
#if defined(IL2CPP_STRUCT_RecordableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_RecordableObject_DEFINED
struct RecordableObject__Class;
struct RecordableObject {
    struct RecordableObject__Class* klass;
    MonitorData* monitor;
    struct RecordableObject__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RecordableObject_FWDDECL)
#define IL2CPP_STRUCT_RecordableObject_FWDDECL
#include <Modloader/app/structs/RecordableObject__Class.h>
#endif
#undef IL2CPP_STRUCT_RecordableObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecordableObject_DEFINED) && !defined(IL2CPP_STRUCT_RecordableObject_FWDDECL)
#include <Modloader/app/structs/RecordableObject.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecordableObject.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
