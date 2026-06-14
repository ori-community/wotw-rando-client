#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostCharacterStatesData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostCharacterStatesData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostCharacterStatesData_DEFINED)
#include <Modloader/app/structs/GhostCharacterStatesData__Fields.h>
#if defined(IL2CPP_STRUCT_GhostCharacterStatesData__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostCharacterStatesData_DEFINED
struct GhostCharacterStatesData__Class;
struct GhostCharacterStatesData {
    struct GhostCharacterStatesData__Class* klass;
    MonitorData* monitor;
    struct GhostCharacterStatesData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostCharacterStatesData_FWDDECL)
#define IL2CPP_STRUCT_GhostCharacterStatesData_FWDDECL
#include <Modloader/app/structs/GhostCharacterStatesData__Class.h>
#endif
#undef IL2CPP_STRUCT_GhostCharacterStatesData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostCharacterStatesData_DEFINED) && !defined(IL2CPP_STRUCT_GhostCharacterStatesData_FWDDECL)
#include <Modloader/app/structs/GhostCharacterStatesData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostCharacterStatesData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
