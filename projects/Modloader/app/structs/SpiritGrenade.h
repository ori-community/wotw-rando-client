#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritGrenade_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritGrenade_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritGrenade_DEFINED)
#include <Modloader/app/structs/SpiritGrenade__Fields.h>
#if defined(IL2CPP_STRUCT_SpiritGrenade__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiritGrenade_DEFINED
struct SpiritGrenade__Class;
struct SpiritGrenade {
    struct SpiritGrenade__Class* klass;
    MonitorData* monitor;
    struct SpiritGrenade__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritGrenade_FWDDECL)
#define IL2CPP_STRUCT_SpiritGrenade_FWDDECL
#include <Modloader/app/structs/SpiritGrenade__Class.h>
#endif
#undef IL2CPP_STRUCT_SpiritGrenade_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritGrenade_DEFINED) && !defined(IL2CPP_STRUCT_SpiritGrenade_FWDDECL)
#include <Modloader/app/structs/SpiritGrenade.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritGrenade.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
