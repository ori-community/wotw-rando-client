#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CompatibleComparer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CompatibleComparer_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompatibleComparer_DEFINED)
#include <Modloader/app/structs/CompatibleComparer__Fields.h>
#if defined(IL2CPP_STRUCT_CompatibleComparer__Fields_DEFINED)
#define IL2CPP_STRUCT_CompatibleComparer_DEFINED
struct CompatibleComparer__Class;
struct CompatibleComparer {
    struct CompatibleComparer__Class* klass;
    MonitorData* monitor;
    struct CompatibleComparer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CompatibleComparer_FWDDECL)
#define IL2CPP_STRUCT_CompatibleComparer_FWDDECL
#include <Modloader/app/structs/CompatibleComparer__Class.h>
#endif
#undef IL2CPP_STRUCT_CompatibleComparer_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompatibleComparer_DEFINED) && !defined(IL2CPP_STRUCT_CompatibleComparer_FWDDECL)
#include <Modloader/app/structs/CompatibleComparer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CompatibleComparer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
