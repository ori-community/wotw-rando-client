#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MethodCall_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MethodCall_INITIALIZING
#if !defined(IL2CPP_STRUCT_MethodCall_DEFINED)
#include <Modloader/app/structs/MethodCall__Fields.h>
#if defined(IL2CPP_STRUCT_MethodCall__Fields_DEFINED)
#define IL2CPP_STRUCT_MethodCall_DEFINED
struct MethodCall__Class;
struct MethodCall {
    struct MethodCall__Class* klass;
    MonitorData* monitor;
    struct MethodCall__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MethodCall_FWDDECL)
#define IL2CPP_STRUCT_MethodCall_FWDDECL
#include <Modloader/app/structs/MethodCall__Class.h>
#endif
#undef IL2CPP_STRUCT_MethodCall_INITIALIZING
#if !defined(IL2CPP_STRUCT_MethodCall_DEFINED) && !defined(IL2CPP_STRUCT_MethodCall_FWDDECL)
#include <Modloader/app/structs/MethodCall.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MethodCall.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
