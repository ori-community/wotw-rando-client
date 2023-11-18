#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TransformRecorderData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TransformRecorderData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformRecorderData_DEFINED)
#include <Modloader/app/structs/TransformRecorderData__Fields.h>
#if defined(IL2CPP_STRUCT_TransformRecorderData__Fields_DEFINED)
#define IL2CPP_STRUCT_TransformRecorderData_DEFINED
struct TransformRecorderData__Class;
struct TransformRecorderData {
    struct TransformRecorderData__Class* klass;
    MonitorData* monitor;
    struct TransformRecorderData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TransformRecorderData_FWDDECL)
#define IL2CPP_STRUCT_TransformRecorderData_FWDDECL
#include <Modloader/app/structs/TransformRecorderData__Class.h>
#endif
#undef IL2CPP_STRUCT_TransformRecorderData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformRecorderData_DEFINED) && !defined(IL2CPP_STRUCT_TransformRecorderData_FWDDECL)
#include <Modloader/app/structs/TransformRecorderData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TransformRecorderData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
