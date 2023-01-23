#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinChargeJump_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinChargeJump_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinChargeJump_DEFINED)
#include <Modloader/app/structs/SeinChargeJump__Fields.h>
#if defined(IL2CPP_STRUCT_SeinChargeJump__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinChargeJump_DEFINED
struct SeinChargeJump__Class;
struct SeinChargeJump {
    struct SeinChargeJump__Class* klass;
    MonitorData* monitor;
    struct SeinChargeJump__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinChargeJump_FWDDECL)
#define IL2CPP_STRUCT_SeinChargeJump_FWDDECL
#include <Modloader/app/structs/SeinChargeJump__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinChargeJump_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinChargeJump_DEFINED) && !defined(IL2CPP_STRUCT_SeinChargeJump_FWDDECL)
#include <Modloader/app/structs/SeinChargeJump.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinChargeJump.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
