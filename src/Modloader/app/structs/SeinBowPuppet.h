#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinBowPuppet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinBowPuppet_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinBowPuppet_DEFINED)
#include <Modloader/app/structs/SeinBowPuppet__Fields.h>
#if defined(IL2CPP_STRUCT_SeinBowPuppet__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinBowPuppet_DEFINED
struct SeinBowPuppet__Class;
struct SeinBowPuppet {
    struct SeinBowPuppet__Class* klass;
    MonitorData* monitor;
    struct SeinBowPuppet__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinBowPuppet_FWDDECL)
#define IL2CPP_STRUCT_SeinBowPuppet_FWDDECL
#include <Modloader/app/structs/SeinBowPuppet__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinBowPuppet_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinBowPuppet_DEFINED) && !defined(IL2CPP_STRUCT_SeinBowPuppet_FWDDECL)
#include <Modloader/app/structs/SeinBowPuppet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinBowPuppet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
