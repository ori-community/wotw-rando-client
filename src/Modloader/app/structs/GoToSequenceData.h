#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GoToSequenceData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GoToSequenceData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GoToSequenceData_DEFINED)
#include <Modloader/app/structs/GoToSequenceData__Fields.h>
#if defined(IL2CPP_STRUCT_GoToSequenceData__Fields_DEFINED)
#define IL2CPP_STRUCT_GoToSequenceData_DEFINED
struct GoToSequenceData__Class;
struct GoToSequenceData {
    struct GoToSequenceData__Class* klass;
    MonitorData* monitor;
    struct GoToSequenceData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GoToSequenceData_FWDDECL)
#define IL2CPP_STRUCT_GoToSequenceData_FWDDECL
#include <Modloader/app/structs/GoToSequenceData__Class.h>
#endif
#undef IL2CPP_STRUCT_GoToSequenceData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GoToSequenceData_DEFINED) && !defined(IL2CPP_STRUCT_GoToSequenceData_FWDDECL)
#include <Modloader/app/structs/GoToSequenceData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GoToSequenceData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
