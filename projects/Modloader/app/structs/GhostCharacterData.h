#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostCharacterData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostCharacterData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostCharacterData_DEFINED)
#include <Modloader/app/structs/GhostCharacterData__Fields.h>
#if defined(IL2CPP_STRUCT_GhostCharacterData__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostCharacterData_DEFINED
struct GhostCharacterData__Class;
struct GhostCharacterData {
    struct GhostCharacterData__Class* klass;
    MonitorData* monitor;
    struct GhostCharacterData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostCharacterData_FWDDECL)
#define IL2CPP_STRUCT_GhostCharacterData_FWDDECL
#include <Modloader/app/structs/GhostCharacterData__Class.h>
#endif
#undef IL2CPP_STRUCT_GhostCharacterData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostCharacterData_DEFINED) && !defined(IL2CPP_STRUCT_GhostCharacterData_FWDDECL)
#include <Modloader/app/structs/GhostCharacterData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostCharacterData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
