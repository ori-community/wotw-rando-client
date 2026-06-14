#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeverPuppet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeverPuppet_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeverPuppet_DEFINED)
#include <Modloader/app/structs/LeverPuppet__Fields.h>
#if defined(IL2CPP_STRUCT_LeverPuppet__Fields_DEFINED)
#define IL2CPP_STRUCT_LeverPuppet_DEFINED
struct LeverPuppet__Class;
struct LeverPuppet {
    struct LeverPuppet__Class* klass;
    MonitorData* monitor;
    struct LeverPuppet__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeverPuppet_FWDDECL)
#define IL2CPP_STRUCT_LeverPuppet_FWDDECL
#include <Modloader/app/structs/LeverPuppet__Class.h>
#endif
#undef IL2CPP_STRUCT_LeverPuppet_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeverPuppet_DEFINED) && !defined(IL2CPP_STRUCT_LeverPuppet_FWDDECL)
#include <Modloader/app/structs/LeverPuppet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeverPuppet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
