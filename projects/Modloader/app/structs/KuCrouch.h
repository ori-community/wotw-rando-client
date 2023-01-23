#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KuCrouch_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KuCrouch_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuCrouch_DEFINED)
#include <Modloader/app/structs/KuCrouch__Fields.h>
#if defined(IL2CPP_STRUCT_KuCrouch__Fields_DEFINED)
#define IL2CPP_STRUCT_KuCrouch_DEFINED
struct KuCrouch__Class;
struct KuCrouch {
    struct KuCrouch__Class* klass;
    MonitorData* monitor;
    struct KuCrouch__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KuCrouch_FWDDECL)
#define IL2CPP_STRUCT_KuCrouch_FWDDECL
#include <Modloader/app/structs/KuCrouch__Class.h>
#endif
#undef IL2CPP_STRUCT_KuCrouch_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuCrouch_DEFINED) && !defined(IL2CPP_STRUCT_KuCrouch_FWDDECL)
#include <Modloader/app/structs/KuCrouch.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KuCrouch.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
