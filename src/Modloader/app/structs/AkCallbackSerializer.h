#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkCallbackSerializer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkCallbackSerializer_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCallbackSerializer_DEFINED)
#include <Modloader/app/structs/AkCallbackSerializer__Fields.h>
#if defined(IL2CPP_STRUCT_AkCallbackSerializer__Fields_DEFINED)
#define IL2CPP_STRUCT_AkCallbackSerializer_DEFINED
struct AkCallbackSerializer__Class;
struct AkCallbackSerializer {
    struct AkCallbackSerializer__Class* klass;
    MonitorData* monitor;
    struct AkCallbackSerializer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkCallbackSerializer_FWDDECL)
#define IL2CPP_STRUCT_AkCallbackSerializer_FWDDECL
#include <Modloader/app/structs/AkCallbackSerializer__Class.h>
#endif
#undef IL2CPP_STRUCT_AkCallbackSerializer_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCallbackSerializer_DEFINED) && !defined(IL2CPP_STRUCT_AkCallbackSerializer_FWDDECL)
#include <Modloader/app/structs/AkCallbackSerializer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkCallbackSerializer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
