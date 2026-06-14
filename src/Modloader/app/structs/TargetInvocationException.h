#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TargetInvocationException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TargetInvocationException_INITIALIZING
#if !defined(IL2CPP_STRUCT_TargetInvocationException_DEFINED)
#include <Modloader/app/structs/TargetInvocationException__Fields.h>
#if defined(IL2CPP_STRUCT_TargetInvocationException__Fields_DEFINED)
#define IL2CPP_STRUCT_TargetInvocationException_DEFINED
struct TargetInvocationException__Class;
struct TargetInvocationException {
    struct TargetInvocationException__Class* klass;
    MonitorData* monitor;
    struct TargetInvocationException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TargetInvocationException_FWDDECL)
#define IL2CPP_STRUCT_TargetInvocationException_FWDDECL
#include <Modloader/app/structs/TargetInvocationException__Class.h>
#endif
#undef IL2CPP_STRUCT_TargetInvocationException_INITIALIZING
#if !defined(IL2CPP_STRUCT_TargetInvocationException_DEFINED) && !defined(IL2CPP_STRUCT_TargetInvocationException_FWDDECL)
#include <Modloader/app/structs/TargetInvocationException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TargetInvocationException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
