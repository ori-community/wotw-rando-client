#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecordTransformPlugin_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecordTransformPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecordTransformPlugin_DEFINED)
#include <Modloader/app/structs/RecordTransformPlugin__Fields.h>
#if defined(IL2CPP_STRUCT_RecordTransformPlugin__Fields_DEFINED)
#define IL2CPP_STRUCT_RecordTransformPlugin_DEFINED
struct RecordTransformPlugin__Class;
struct RecordTransformPlugin {
    struct RecordTransformPlugin__Class* klass;
    MonitorData* monitor;
    struct RecordTransformPlugin__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RecordTransformPlugin_FWDDECL)
#define IL2CPP_STRUCT_RecordTransformPlugin_FWDDECL
#include <Modloader/app/structs/RecordTransformPlugin__Class.h>
#endif
#undef IL2CPP_STRUCT_RecordTransformPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecordTransformPlugin_DEFINED) && !defined(IL2CPP_STRUCT_RecordTransformPlugin_FWDDECL)
#include <Modloader/app/structs/RecordTransformPlugin.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecordTransformPlugin.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
