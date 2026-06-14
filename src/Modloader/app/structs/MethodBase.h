#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MethodBase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MethodBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_MethodBase_DEFINED)
#define IL2CPP_STRUCT_MethodBase_DEFINED
struct MethodBase__Class;
struct MethodBase {
    struct MethodBase__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MethodBase_FWDDECL)
#define IL2CPP_STRUCT_MethodBase_FWDDECL
#include <Modloader/app/structs/MethodBase__Class.h>
#endif
#undef IL2CPP_STRUCT_MethodBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_MethodBase_DEFINED) && !defined(IL2CPP_STRUCT_MethodBase_FWDDECL)
#include <Modloader/app/structs/MethodBase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MethodBase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
