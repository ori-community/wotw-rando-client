#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletBody_Link_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletBody_Link_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletBody_Link_DEFINED)
#include <Modloader/app/structs/VerletBody_Link__Fields.h>
#if defined(IL2CPP_STRUCT_VerletBody_Link__Fields_DEFINED)
#define IL2CPP_STRUCT_VerletBody_Link_DEFINED
struct VerletBody_Link__Class;
struct VerletBody_Link {
    struct VerletBody_Link__Class* klass;
    MonitorData* monitor;
    struct VerletBody_Link__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerletBody_Link_FWDDECL)
#define IL2CPP_STRUCT_VerletBody_Link_FWDDECL
#include <Modloader/app/structs/VerletBody_Link__Class.h>
#endif
#undef IL2CPP_STRUCT_VerletBody_Link_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletBody_Link_DEFINED) && !defined(IL2CPP_STRUCT_VerletBody_Link_FWDDECL)
#include <Modloader/app/structs/VerletBody_Link.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletBody_Link.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
