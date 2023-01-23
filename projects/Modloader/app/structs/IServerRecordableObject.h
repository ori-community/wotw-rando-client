#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IServerRecordableObject_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IServerRecordableObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_IServerRecordableObject_DEFINED)
#define IL2CPP_STRUCT_IServerRecordableObject_DEFINED
struct IServerRecordableObject__Class;
struct IServerRecordableObject {
    struct IServerRecordableObject__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IServerRecordableObject_FWDDECL)
#define IL2CPP_STRUCT_IServerRecordableObject_FWDDECL
#include <Modloader/app/structs/IServerRecordableObject__Class.h>
#endif
#undef IL2CPP_STRUCT_IServerRecordableObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_IServerRecordableObject_DEFINED) && !defined(IL2CPP_STRUCT_IServerRecordableObject_FWDDECL)
#include <Modloader/app/structs/IServerRecordableObject.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IServerRecordableObject.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
