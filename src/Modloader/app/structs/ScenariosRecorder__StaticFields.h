#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScenariosRecorder__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScenariosRecorder__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenariosRecorder__StaticFields_DEFINED)
#include <Modloader/app/structs/ScenarioRecorderState__Enum.h>
#if defined(IL2CPP_STRUCT_ScenarioRecorderState__Enum_DEFINED)
#define IL2CPP_STRUCT_ScenariosRecorder__StaticFields_DEFINED
struct String;
struct ScenariosRecorder__StaticFields {
    ScenarioRecorderState__Enum m_state;

    struct String* m_scenarioName;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScenariosRecorder__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_ScenariosRecorder__StaticFields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ScenariosRecorder__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenariosRecorder__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_ScenariosRecorder__StaticFields_FWDDECL)
#include <Modloader/app/structs/ScenariosRecorder__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScenariosRecorder__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
