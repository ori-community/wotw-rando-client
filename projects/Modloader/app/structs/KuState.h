#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KuState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KuState_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuState_DEFINED)
#include <Modloader/app/structs/KuState__Fields.h>
#if defined(IL2CPP_STRUCT_KuState__Fields_DEFINED)
#define IL2CPP_STRUCT_KuState_DEFINED
struct KuState__Class;
struct KuState {
    struct KuState__Class* klass;
    MonitorData* monitor;
    struct KuState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KuState_FWDDECL)
#define IL2CPP_STRUCT_KuState_FWDDECL
#include <Modloader/app/structs/KuState__Class.h>
#endif
#undef IL2CPP_STRUCT_KuState_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuState_DEFINED) && !defined(IL2CPP_STRUCT_KuState_FWDDECL)
#include <Modloader/app/structs/KuState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KuState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
