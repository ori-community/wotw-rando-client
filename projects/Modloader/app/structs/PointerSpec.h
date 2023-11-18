#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PointerSpec_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PointerSpec_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointerSpec_DEFINED)
#include <Modloader/app/structs/PointerSpec__Fields.h>
#if defined(IL2CPP_STRUCT_PointerSpec__Fields_DEFINED)
#define IL2CPP_STRUCT_PointerSpec_DEFINED
struct PointerSpec__Class;
struct PointerSpec {
    struct PointerSpec__Class* klass;
    MonitorData* monitor;
    struct PointerSpec__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PointerSpec_FWDDECL)
#define IL2CPP_STRUCT_PointerSpec_FWDDECL
#include <Modloader/app/structs/PointerSpec__Class.h>
#endif
#undef IL2CPP_STRUCT_PointerSpec_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointerSpec_DEFINED) && !defined(IL2CPP_STRUCT_PointerSpec_FWDDECL)
#include <Modloader/app/structs/PointerSpec.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PointerSpec.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
