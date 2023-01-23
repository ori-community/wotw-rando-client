#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KuIdle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KuIdle_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuIdle_DEFINED)
#include <Modloader/app/structs/KuIdle__Fields.h>
#if defined(IL2CPP_STRUCT_KuIdle__Fields_DEFINED)
#define IL2CPP_STRUCT_KuIdle_DEFINED
struct KuIdle__Class;
struct KuIdle {
    struct KuIdle__Class* klass;
    MonitorData* monitor;
    struct KuIdle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KuIdle_FWDDECL)
#define IL2CPP_STRUCT_KuIdle_FWDDECL
#include <Modloader/app/structs/KuIdle__Class.h>
#endif
#undef IL2CPP_STRUCT_KuIdle_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuIdle_DEFINED) && !defined(IL2CPP_STRUCT_KuIdle_FWDDECL)
#include <Modloader/app/structs/KuIdle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KuIdle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
