#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CallbackIdentityAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CallbackIdentityAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallbackIdentityAttribute_DEFINED)
#include <Modloader/app/structs/CallbackIdentityAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_CallbackIdentityAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_CallbackIdentityAttribute_DEFINED
struct CallbackIdentityAttribute__Class;
struct CallbackIdentityAttribute {
    struct CallbackIdentityAttribute__Class* klass;
    MonitorData* monitor;
    struct CallbackIdentityAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CallbackIdentityAttribute_FWDDECL)
#define IL2CPP_STRUCT_CallbackIdentityAttribute_FWDDECL
#include <Modloader/app/structs/CallbackIdentityAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_CallbackIdentityAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallbackIdentityAttribute_DEFINED) && !defined(IL2CPP_STRUCT_CallbackIdentityAttribute_FWDDECL)
#include <Modloader/app/structs/CallbackIdentityAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CallbackIdentityAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
