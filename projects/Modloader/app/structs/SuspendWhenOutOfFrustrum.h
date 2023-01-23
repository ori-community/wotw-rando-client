#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SuspendWhenOutOfFrustrum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SuspendWhenOutOfFrustrum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SuspendWhenOutOfFrustrum_DEFINED)
#include <Modloader/app/structs/SuspendWhenOutOfFrustrum__Fields.h>
#if defined(IL2CPP_STRUCT_SuspendWhenOutOfFrustrum__Fields_DEFINED)
#define IL2CPP_STRUCT_SuspendWhenOutOfFrustrum_DEFINED
struct SuspendWhenOutOfFrustrum__Class;
struct SuspendWhenOutOfFrustrum {
    struct SuspendWhenOutOfFrustrum__Class* klass;
    MonitorData* monitor;
    struct SuspendWhenOutOfFrustrum__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SuspendWhenOutOfFrustrum_FWDDECL)
#define IL2CPP_STRUCT_SuspendWhenOutOfFrustrum_FWDDECL
#include <Modloader/app/structs/SuspendWhenOutOfFrustrum__Class.h>
#endif
#undef IL2CPP_STRUCT_SuspendWhenOutOfFrustrum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SuspendWhenOutOfFrustrum_DEFINED) && !defined(IL2CPP_STRUCT_SuspendWhenOutOfFrustrum_FWDDECL)
#include <Modloader/app/structs/SuspendWhenOutOfFrustrum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SuspendWhenOutOfFrustrum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
