#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritFlame_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritFlame_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritFlame_DEFINED)
#include <Modloader/app/structs/SpiritFlame__Fields.h>
#if defined(IL2CPP_STRUCT_SpiritFlame__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiritFlame_DEFINED
struct SpiritFlame__Class;
struct SpiritFlame {
    struct SpiritFlame__Class* klass;
    MonitorData* monitor;
    struct SpiritFlame__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritFlame_FWDDECL)
#define IL2CPP_STRUCT_SpiritFlame_FWDDECL
#include <Modloader/app/structs/SpiritFlame__Class.h>
#endif
#undef IL2CPP_STRUCT_SpiritFlame_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritFlame_DEFINED) && !defined(IL2CPP_STRUCT_SpiritFlame_FWDDECL)
#include <Modloader/app/structs/SpiritFlame.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritFlame.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
