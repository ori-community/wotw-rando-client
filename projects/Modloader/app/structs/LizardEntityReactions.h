#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LizardEntityReactions_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LizardEntityReactions_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardEntityReactions_DEFINED)
#include <Modloader/app/structs/LizardEntityReactions__Fields.h>
#if defined(IL2CPP_STRUCT_LizardEntityReactions__Fields_DEFINED)
#define IL2CPP_STRUCT_LizardEntityReactions_DEFINED
struct LizardEntityReactions__Class;
struct LizardEntityReactions {
    struct LizardEntityReactions__Class* klass;
    MonitorData* monitor;
    struct LizardEntityReactions__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LizardEntityReactions_FWDDECL)
#define IL2CPP_STRUCT_LizardEntityReactions_FWDDECL
#include <Modloader/app/structs/LizardEntityReactions__Class.h>
#endif
#undef IL2CPP_STRUCT_LizardEntityReactions_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardEntityReactions_DEFINED) && !defined(IL2CPP_STRUCT_LizardEntityReactions_FWDDECL)
#include <Modloader/app/structs/LizardEntityReactions.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LizardEntityReactions.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
