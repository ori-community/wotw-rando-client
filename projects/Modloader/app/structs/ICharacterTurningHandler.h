#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ICharacterTurningHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ICharacterTurningHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICharacterTurningHandler_DEFINED)
#define IL2CPP_STRUCT_ICharacterTurningHandler_DEFINED
struct ICharacterTurningHandler__Class;
struct ICharacterTurningHandler {
    struct ICharacterTurningHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ICharacterTurningHandler_FWDDECL)
#define IL2CPP_STRUCT_ICharacterTurningHandler_FWDDECL
#include <Modloader/app/structs/ICharacterTurningHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_ICharacterTurningHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICharacterTurningHandler_DEFINED) && !defined(IL2CPP_STRUCT_ICharacterTurningHandler_FWDDECL)
#include <Modloader/app/structs/ICharacterTurningHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ICharacterTurningHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
