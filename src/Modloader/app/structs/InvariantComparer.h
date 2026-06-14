#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InvariantComparer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InvariantComparer_INITIALIZING
#if !defined(IL2CPP_STRUCT_InvariantComparer_DEFINED)
#include <Modloader/app/structs/InvariantComparer__Fields.h>
#if defined(IL2CPP_STRUCT_InvariantComparer__Fields_DEFINED)
#define IL2CPP_STRUCT_InvariantComparer_DEFINED
struct InvariantComparer__Class;
struct InvariantComparer {
    struct InvariantComparer__Class* klass;
    MonitorData* monitor;
    struct InvariantComparer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InvariantComparer_FWDDECL)
#define IL2CPP_STRUCT_InvariantComparer_FWDDECL
#include <Modloader/app/structs/InvariantComparer__Class.h>
#endif
#undef IL2CPP_STRUCT_InvariantComparer_INITIALIZING
#if !defined(IL2CPP_STRUCT_InvariantComparer_DEFINED) && !defined(IL2CPP_STRUCT_InvariantComparer_FWDDECL)
#include <Modloader/app/structs/InvariantComparer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InvariantComparer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
