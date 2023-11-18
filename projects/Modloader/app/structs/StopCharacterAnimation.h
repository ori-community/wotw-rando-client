#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StopCharacterAnimation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StopCharacterAnimation_INITIALIZING
#if !defined(IL2CPP_STRUCT_StopCharacterAnimation_DEFINED)
#include <Modloader/app/structs/StopCharacterAnimation__Fields.h>
#if defined(IL2CPP_STRUCT_StopCharacterAnimation__Fields_DEFINED)
#define IL2CPP_STRUCT_StopCharacterAnimation_DEFINED
struct StopCharacterAnimation__Class;
struct StopCharacterAnimation {
    struct StopCharacterAnimation__Class* klass;
    MonitorData* monitor;
    struct StopCharacterAnimation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StopCharacterAnimation_FWDDECL)
#define IL2CPP_STRUCT_StopCharacterAnimation_FWDDECL
#include <Modloader/app/structs/StopCharacterAnimation__Class.h>
#endif
#undef IL2CPP_STRUCT_StopCharacterAnimation_INITIALIZING
#if !defined(IL2CPP_STRUCT_StopCharacterAnimation_DEFINED) && !defined(IL2CPP_STRUCT_StopCharacterAnimation_FWDDECL)
#include <Modloader/app/structs/StopCharacterAnimation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StopCharacterAnimation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
