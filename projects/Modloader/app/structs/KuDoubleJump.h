#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KuDoubleJump_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KuDoubleJump_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuDoubleJump_DEFINED)
#include <Modloader/app/structs/KuDoubleJump__Fields.h>
#if defined(IL2CPP_STRUCT_KuDoubleJump__Fields_DEFINED)
#define IL2CPP_STRUCT_KuDoubleJump_DEFINED
struct KuDoubleJump__Class;
struct KuDoubleJump {
    struct KuDoubleJump__Class* klass;
    MonitorData* monitor;
    struct KuDoubleJump__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KuDoubleJump_FWDDECL)
#define IL2CPP_STRUCT_KuDoubleJump_FWDDECL
#include <Modloader/app/structs/KuDoubleJump__Class.h>
#endif
#undef IL2CPP_STRUCT_KuDoubleJump_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuDoubleJump_DEFINED) && !defined(IL2CPP_STRUCT_KuDoubleJump_FWDDECL)
#include <Modloader/app/structs/KuDoubleJump.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KuDoubleJump.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
