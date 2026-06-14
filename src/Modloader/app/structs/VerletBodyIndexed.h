#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletBodyIndexed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletBodyIndexed_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletBodyIndexed_DEFINED)
#include <Modloader/app/structs/VerletBodyIndexed__Fields.h>
#if defined(IL2CPP_STRUCT_VerletBodyIndexed__Fields_DEFINED)
#define IL2CPP_STRUCT_VerletBodyIndexed_DEFINED
struct VerletBodyIndexed__Class;
struct VerletBodyIndexed {
    struct VerletBodyIndexed__Class* klass;
    MonitorData* monitor;
    struct VerletBodyIndexed__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerletBodyIndexed_FWDDECL)
#define IL2CPP_STRUCT_VerletBodyIndexed_FWDDECL
#include <Modloader/app/structs/VerletBodyIndexed__Class.h>
#endif
#undef IL2CPP_STRUCT_VerletBodyIndexed_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletBodyIndexed_DEFINED) && !defined(IL2CPP_STRUCT_VerletBodyIndexed_FWDDECL)
#include <Modloader/app/structs/VerletBodyIndexed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletBodyIndexed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
