#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OriJumpPuppet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OriJumpPuppet_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriJumpPuppet_DEFINED)
#include <Modloader/app/structs/OriJumpPuppet__Fields.h>
#if defined(IL2CPP_STRUCT_OriJumpPuppet__Fields_DEFINED)
#define IL2CPP_STRUCT_OriJumpPuppet_DEFINED
struct OriJumpPuppet__Class;
struct OriJumpPuppet {
    struct OriJumpPuppet__Class* klass;
    MonitorData* monitor;
    struct OriJumpPuppet__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OriJumpPuppet_FWDDECL)
#define IL2CPP_STRUCT_OriJumpPuppet_FWDDECL
#include <Modloader/app/structs/OriJumpPuppet__Class.h>
#endif
#undef IL2CPP_STRUCT_OriJumpPuppet_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriJumpPuppet_DEFINED) && !defined(IL2CPP_STRUCT_OriJumpPuppet_FWDDECL)
#include <Modloader/app/structs/OriJumpPuppet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OriJumpPuppet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
