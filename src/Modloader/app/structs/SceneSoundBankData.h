#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneSoundBankData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneSoundBankData_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneSoundBankData_DEFINED)
#include <Modloader/app/structs/SceneSoundBankData__Fields.h>
#if defined(IL2CPP_STRUCT_SceneSoundBankData__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneSoundBankData_DEFINED
struct SceneSoundBankData__Class;
struct SceneSoundBankData {
    struct SceneSoundBankData__Class* klass;
    MonitorData* monitor;
    struct SceneSoundBankData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneSoundBankData_FWDDECL)
#define IL2CPP_STRUCT_SceneSoundBankData_FWDDECL
#include <Modloader/app/structs/SceneSoundBankData__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneSoundBankData_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneSoundBankData_DEFINED) && !defined(IL2CPP_STRUCT_SceneSoundBankData_FWDDECL)
#include <Modloader/app/structs/SceneSoundBankData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneSoundBankData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
