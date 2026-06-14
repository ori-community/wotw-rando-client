#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SerializePrivateVariables_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SerializePrivateVariables_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializePrivateVariables_DEFINED)
#define IL2CPP_STRUCT_SerializePrivateVariables_DEFINED
struct SerializePrivateVariables__Class;
struct SerializePrivateVariables {
    struct SerializePrivateVariables__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SerializePrivateVariables_FWDDECL)
#define IL2CPP_STRUCT_SerializePrivateVariables_FWDDECL
#include <Modloader/app/structs/SerializePrivateVariables__Class.h>
#endif
#undef IL2CPP_STRUCT_SerializePrivateVariables_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializePrivateVariables_DEFINED) && !defined(IL2CPP_STRUCT_SerializePrivateVariables_FWDDECL)
#include <Modloader/app/structs/SerializePrivateVariables.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SerializePrivateVariables.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
