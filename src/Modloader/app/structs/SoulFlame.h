#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoulFlame_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoulFlame_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoulFlame_DEFINED)
#include <Modloader/app/structs/SoulFlame__Fields.h>
#if defined(IL2CPP_STRUCT_SoulFlame__Fields_DEFINED)
#define IL2CPP_STRUCT_SoulFlame_DEFINED
struct SoulFlame__Class;
struct SoulFlame {
    struct SoulFlame__Class* klass;
    MonitorData* monitor;
    struct SoulFlame__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoulFlame_FWDDECL)
#define IL2CPP_STRUCT_SoulFlame_FWDDECL
#include <Modloader/app/structs/SoulFlame__Class.h>
#endif
#undef IL2CPP_STRUCT_SoulFlame_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoulFlame_DEFINED) && !defined(IL2CPP_STRUCT_SoulFlame_FWDDECL)
#include <Modloader/app/structs/SoulFlame.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoulFlame.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
