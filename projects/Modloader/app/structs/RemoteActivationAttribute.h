#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemoteActivationAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemoteActivationAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoteActivationAttribute_DEFINED)
#include <Modloader/app/structs/RemoteActivationAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_RemoteActivationAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_RemoteActivationAttribute_DEFINED
struct RemoteActivationAttribute__Class;
struct RemoteActivationAttribute {
    struct RemoteActivationAttribute__Class* klass;
    MonitorData* monitor;
    struct RemoteActivationAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RemoteActivationAttribute_FWDDECL)
#define IL2CPP_STRUCT_RemoteActivationAttribute_FWDDECL
#include <Modloader/app/structs/RemoteActivationAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_RemoteActivationAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoteActivationAttribute_DEFINED) && !defined(IL2CPP_STRUCT_RemoteActivationAttribute_FWDDECL)
#include <Modloader/app/structs/RemoteActivationAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemoteActivationAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
