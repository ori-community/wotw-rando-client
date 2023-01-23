#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkAuxSendValue_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkAuxSendValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkAuxSendValue_DEFINED)
#include <Modloader/app/structs/AkAuxSendValue__Fields.h>
#if defined(IL2CPP_STRUCT_AkAuxSendValue__Fields_DEFINED)
#define IL2CPP_STRUCT_AkAuxSendValue_DEFINED
struct AkAuxSendValue__Class;
struct AkAuxSendValue {
    struct AkAuxSendValue__Class* klass;
    MonitorData* monitor;
    struct AkAuxSendValue__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkAuxSendValue_FWDDECL)
#define IL2CPP_STRUCT_AkAuxSendValue_FWDDECL
#include <Modloader/app/structs/AkAuxSendValue__Class.h>
#endif
#undef IL2CPP_STRUCT_AkAuxSendValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkAuxSendValue_DEFINED) && !defined(IL2CPP_STRUCT_AkAuxSendValue_FWDDECL)
#include <Modloader/app/structs/AkAuxSendValue.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkAuxSendValue.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
