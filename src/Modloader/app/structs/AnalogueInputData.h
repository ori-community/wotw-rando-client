#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnalogueInputData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnalogueInputData_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnalogueInputData_DEFINED)
#include <Modloader/app/structs/AnalogueInputData__Fields.h>
#if defined(IL2CPP_STRUCT_AnalogueInputData__Fields_DEFINED)
#define IL2CPP_STRUCT_AnalogueInputData_DEFINED
struct AnalogueInputData__Class;
struct AnalogueInputData {
    struct AnalogueInputData__Class* klass;
    MonitorData* monitor;
    struct AnalogueInputData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnalogueInputData_FWDDECL)
#define IL2CPP_STRUCT_AnalogueInputData_FWDDECL
#include <Modloader/app/structs/AnalogueInputData__Class.h>
#endif
#undef IL2CPP_STRUCT_AnalogueInputData_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnalogueInputData_DEFINED) && !defined(IL2CPP_STRUCT_AnalogueInputData_FWDDECL)
#include <Modloader/app/structs/AnalogueInputData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnalogueInputData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
