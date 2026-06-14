#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerDetector_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerDetector_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerDetector_DEFINED)
#include <Modloader/app/structs/PlayerDetector__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerDetector__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerDetector_DEFINED
struct PlayerDetector__Class;
struct PlayerDetector {
    struct PlayerDetector__Class* klass;
    MonitorData* monitor;
    struct PlayerDetector__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerDetector_FWDDECL)
#define IL2CPP_STRUCT_PlayerDetector_FWDDECL
#include <Modloader/app/structs/PlayerDetector__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerDetector_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerDetector_DEFINED) && !defined(IL2CPP_STRUCT_PlayerDetector_FWDDECL)
#include <Modloader/app/structs/PlayerDetector.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerDetector.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
