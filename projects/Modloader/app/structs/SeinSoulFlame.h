#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinSoulFlame_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinSoulFlame_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSoulFlame_DEFINED)
#include <Modloader/app/structs/SeinSoulFlame__Fields.h>
#if defined(IL2CPP_STRUCT_SeinSoulFlame__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinSoulFlame_DEFINED
struct SeinSoulFlame__Class;
struct SeinSoulFlame {
    struct SeinSoulFlame__Class* klass;
    MonitorData* monitor;
    struct SeinSoulFlame__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinSoulFlame_FWDDECL)
#define IL2CPP_STRUCT_SeinSoulFlame_FWDDECL
#include <Modloader/app/structs/SeinSoulFlame__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinSoulFlame_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSoulFlame_DEFINED) && !defined(IL2CPP_STRUCT_SeinSoulFlame_FWDDECL)
#include <Modloader/app/structs/SeinSoulFlame.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinSoulFlame.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
