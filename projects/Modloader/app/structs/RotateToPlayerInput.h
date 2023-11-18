#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RotateToPlayerInput_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RotateToPlayerInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_RotateToPlayerInput_DEFINED)
#include <Modloader/app/structs/RotateToPlayerInput__Fields.h>
#if defined(IL2CPP_STRUCT_RotateToPlayerInput__Fields_DEFINED)
#define IL2CPP_STRUCT_RotateToPlayerInput_DEFINED
struct RotateToPlayerInput__Class;
struct RotateToPlayerInput {
    struct RotateToPlayerInput__Class* klass;
    MonitorData* monitor;
    struct RotateToPlayerInput__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RotateToPlayerInput_FWDDECL)
#define IL2CPP_STRUCT_RotateToPlayerInput_FWDDECL
#include <Modloader/app/structs/RotateToPlayerInput__Class.h>
#endif
#undef IL2CPP_STRUCT_RotateToPlayerInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_RotateToPlayerInput_DEFINED) && !defined(IL2CPP_STRUCT_RotateToPlayerInput_FWDDECL)
#include <Modloader/app/structs/RotateToPlayerInput.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RotateToPlayerInput.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
