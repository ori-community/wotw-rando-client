#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RagdollUtility_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RagdollUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_RagdollUtility_DEFINED)
#include <Modloader/app/structs/RagdollUtility__Fields.h>
#if defined(IL2CPP_STRUCT_RagdollUtility__Fields_DEFINED)
#define IL2CPP_STRUCT_RagdollUtility_DEFINED
struct RagdollUtility__Class;
struct RagdollUtility {
    struct RagdollUtility__Class* klass;
    MonitorData* monitor;
    struct RagdollUtility__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RagdollUtility_FWDDECL)
#define IL2CPP_STRUCT_RagdollUtility_FWDDECL
#include <Modloader/app/structs/RagdollUtility__Class.h>
#endif
#undef IL2CPP_STRUCT_RagdollUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_RagdollUtility_DEFINED) && !defined(IL2CPP_STRUCT_RagdollUtility_FWDDECL)
#include <Modloader/app/structs/RagdollUtility.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RagdollUtility.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
