#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetCharacterPosition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetCharacterPosition_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetCharacterPosition_DEFINED)
#include <Modloader/app/structs/SetCharacterPosition__Fields.h>
#if defined(IL2CPP_STRUCT_SetCharacterPosition__Fields_DEFINED)
#define IL2CPP_STRUCT_SetCharacterPosition_DEFINED
struct SetCharacterPosition__Class;
struct SetCharacterPosition {
    struct SetCharacterPosition__Class* klass;
    MonitorData* monitor;
    struct SetCharacterPosition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetCharacterPosition_FWDDECL)
#define IL2CPP_STRUCT_SetCharacterPosition_FWDDECL
#include <Modloader/app/structs/SetCharacterPosition__Class.h>
#endif
#undef IL2CPP_STRUCT_SetCharacterPosition_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetCharacterPosition_DEFINED) && !defined(IL2CPP_STRUCT_SetCharacterPosition_FWDDECL)
#include <Modloader/app/structs/SetCharacterPosition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetCharacterPosition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
