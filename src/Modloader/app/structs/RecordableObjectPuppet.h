#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecordableObjectPuppet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecordableObjectPuppet_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecordableObjectPuppet_DEFINED)
#include <Modloader/app/structs/RecordableObjectPuppet__Fields.h>
#if defined(IL2CPP_STRUCT_RecordableObjectPuppet__Fields_DEFINED)
#define IL2CPP_STRUCT_RecordableObjectPuppet_DEFINED
struct RecordableObjectPuppet__Class;
struct RecordableObjectPuppet {
    struct RecordableObjectPuppet__Class* klass;
    MonitorData* monitor;
    struct RecordableObjectPuppet__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RecordableObjectPuppet_FWDDECL)
#define IL2CPP_STRUCT_RecordableObjectPuppet_FWDDECL
#include <Modloader/app/structs/RecordableObjectPuppet__Class.h>
#endif
#undef IL2CPP_STRUCT_RecordableObjectPuppet_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecordableObjectPuppet_DEFINED) && !defined(IL2CPP_STRUCT_RecordableObjectPuppet_FWDDECL)
#include <Modloader/app/structs/RecordableObjectPuppet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecordableObjectPuppet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
