#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinLeverPuppet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinLeverPuppet_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLeverPuppet_DEFINED)
#include <Modloader/app/structs/SeinLeverPuppet__Fields.h>
#if defined(IL2CPP_STRUCT_SeinLeverPuppet__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinLeverPuppet_DEFINED
struct SeinLeverPuppet__Class;
struct SeinLeverPuppet {
    struct SeinLeverPuppet__Class* klass;
    MonitorData* monitor;
    struct SeinLeverPuppet__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinLeverPuppet_FWDDECL)
#define IL2CPP_STRUCT_SeinLeverPuppet_FWDDECL
#include <Modloader/app/structs/SeinLeverPuppet__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinLeverPuppet_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLeverPuppet_DEFINED) && !defined(IL2CPP_STRUCT_SeinLeverPuppet_FWDDECL)
#include <Modloader/app/structs/SeinLeverPuppet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinLeverPuppet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
