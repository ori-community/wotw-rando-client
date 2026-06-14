#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostCharacterPlugin__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostCharacterPlugin__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostCharacterPlugin__Fields_DEFINED)
#include <Modloader/app/structs/IGhostRecorderPlugin__Fields.h>
#if defined(IL2CPP_STRUCT_IGhostRecorderPlugin__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostCharacterPlugin__Fields_DEFINED
struct GhostCharacterData;
struct GhostCharacterPlugin__Fields {
    struct IGhostRecorderPlugin__Fields _;
    struct GhostCharacterData* Data;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostCharacterPlugin__Fields_FWDDECL)
#define IL2CPP_STRUCT_GhostCharacterPlugin__Fields_FWDDECL
#include <Modloader/app/structs/GhostCharacterData.h>
#endif
#undef IL2CPP_STRUCT_GhostCharacterPlugin__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostCharacterPlugin__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GhostCharacterPlugin__Fields_FWDDECL)
#include <Modloader/app/structs/GhostCharacterPlugin__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostCharacterPlugin__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
