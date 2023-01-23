#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BlockDamageInterruption_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BlockDamageInterruption_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlockDamageInterruption_DEFINED)
#include <Modloader/app/structs/BlockDamageInterruption__Fields.h>
#if defined(IL2CPP_STRUCT_BlockDamageInterruption__Fields_DEFINED)
#define IL2CPP_STRUCT_BlockDamageInterruption_DEFINED
struct BlockDamageInterruption__Class;
struct BlockDamageInterruption {
    struct BlockDamageInterruption__Class* klass;
    MonitorData* monitor;
    struct BlockDamageInterruption__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BlockDamageInterruption_FWDDECL)
#define IL2CPP_STRUCT_BlockDamageInterruption_FWDDECL
#include <Modloader/app/structs/BlockDamageInterruption__Class.h>
#endif
#undef IL2CPP_STRUCT_BlockDamageInterruption_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlockDamageInterruption_DEFINED) && !defined(IL2CPP_STRUCT_BlockDamageInterruption_FWDDECL)
#include <Modloader/app/structs/BlockDamageInterruption.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BlockDamageInterruption.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
