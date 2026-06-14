#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ComboMoveSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ComboMoveSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComboMoveSettings_DEFINED)
#include <Modloader/app/structs/ComboMoveSettings__Fields.h>
#if defined(IL2CPP_STRUCT_ComboMoveSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_ComboMoveSettings_DEFINED
struct ComboMoveSettings__Class;
struct ComboMoveSettings {
    struct ComboMoveSettings__Class* klass;
    MonitorData* monitor;
    struct ComboMoveSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ComboMoveSettings_FWDDECL)
#define IL2CPP_STRUCT_ComboMoveSettings_FWDDECL
#include <Modloader/app/structs/ComboMoveSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_ComboMoveSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComboMoveSettings_DEFINED) && !defined(IL2CPP_STRUCT_ComboMoveSettings_FWDDECL)
#include <Modloader/app/structs/ComboMoveSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ComboMoveSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
