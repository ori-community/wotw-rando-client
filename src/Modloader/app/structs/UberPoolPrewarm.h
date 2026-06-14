#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPoolPrewarm_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPoolPrewarm_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolPrewarm_DEFINED)
#include <Modloader/app/structs/UberPoolPrewarm__Fields.h>
#if defined(IL2CPP_STRUCT_UberPoolPrewarm__Fields_DEFINED)
#define IL2CPP_STRUCT_UberPoolPrewarm_DEFINED
struct UberPoolPrewarm__Class;
struct UberPoolPrewarm {
    struct UberPoolPrewarm__Class* klass;
    MonitorData* monitor;
    struct UberPoolPrewarm__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberPoolPrewarm_FWDDECL)
#define IL2CPP_STRUCT_UberPoolPrewarm_FWDDECL
#include <Modloader/app/structs/UberPoolPrewarm__Class.h>
#endif
#undef IL2CPP_STRUCT_UberPoolPrewarm_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolPrewarm_DEFINED) && !defined(IL2CPP_STRUCT_UberPoolPrewarm_FWDDECL)
#include <Modloader/app/structs/UberPoolPrewarm.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPoolPrewarm.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
