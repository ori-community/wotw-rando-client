#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MobileTlsContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MobileTlsContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_MobileTlsContext_DEFINED)
#include <Modloader/app/structs/MobileTlsContext__Fields.h>
#if defined(IL2CPP_STRUCT_MobileTlsContext__Fields_DEFINED)
#define IL2CPP_STRUCT_MobileTlsContext_DEFINED
struct MobileTlsContext__Class;
struct MobileTlsContext {
    struct MobileTlsContext__Class* klass;
    MonitorData* monitor;
    struct MobileTlsContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MobileTlsContext_FWDDECL)
#define IL2CPP_STRUCT_MobileTlsContext_FWDDECL
#include <Modloader/app/structs/MobileTlsContext__Class.h>
#endif
#undef IL2CPP_STRUCT_MobileTlsContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_MobileTlsContext_DEFINED) && !defined(IL2CPP_STRUCT_MobileTlsContext_FWDDECL)
#include <Modloader/app/structs/MobileTlsContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MobileTlsContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
