#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkTaskContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkTaskContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkTaskContext_DEFINED)
#include <Modloader/app/structs/AkTaskContext__Fields.h>
#if defined(IL2CPP_STRUCT_AkTaskContext__Fields_DEFINED)
#define IL2CPP_STRUCT_AkTaskContext_DEFINED
struct AkTaskContext__Class;
struct AkTaskContext {
    struct AkTaskContext__Class* klass;
    MonitorData* monitor;
    struct AkTaskContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkTaskContext_FWDDECL)
#define IL2CPP_STRUCT_AkTaskContext_FWDDECL
#include <Modloader/app/structs/AkTaskContext__Class.h>
#endif
#undef IL2CPP_STRUCT_AkTaskContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkTaskContext_DEFINED) && !defined(IL2CPP_STRUCT_AkTaskContext_FWDDECL)
#include <Modloader/app/structs/AkTaskContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkTaskContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
