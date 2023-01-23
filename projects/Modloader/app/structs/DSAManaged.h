#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DSAManaged_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DSAManaged_INITIALIZING
#if !defined(IL2CPP_STRUCT_DSAManaged_DEFINED)
#include <Modloader/app/structs/DSAManaged__Fields.h>
#if defined(IL2CPP_STRUCT_DSAManaged__Fields_DEFINED)
#define IL2CPP_STRUCT_DSAManaged_DEFINED
struct DSAManaged__Class;
struct DSAManaged {
    struct DSAManaged__Class* klass;
    MonitorData* monitor;
    struct DSAManaged__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DSAManaged_FWDDECL)
#define IL2CPP_STRUCT_DSAManaged_FWDDECL
#include <Modloader/app/structs/DSAManaged__Class.h>
#endif
#undef IL2CPP_STRUCT_DSAManaged_INITIALIZING
#if !defined(IL2CPP_STRUCT_DSAManaged_DEFINED) && !defined(IL2CPP_STRUCT_DSAManaged_FWDDECL)
#include <Modloader/app/structs/DSAManaged.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DSAManaged.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
