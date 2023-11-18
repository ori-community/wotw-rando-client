#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AmplifyColorEffect_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AmplifyColorEffect_INITIALIZING
#if !defined(IL2CPP_STRUCT_AmplifyColorEffect_DEFINED)
#include <Modloader/app/structs/AmplifyColorEffect__Fields.h>
#if defined(IL2CPP_STRUCT_AmplifyColorEffect__Fields_DEFINED)
#define IL2CPP_STRUCT_AmplifyColorEffect_DEFINED
struct AmplifyColorEffect__Class;
struct AmplifyColorEffect {
    struct AmplifyColorEffect__Class* klass;
    MonitorData* monitor;
    struct AmplifyColorEffect__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AmplifyColorEffect_FWDDECL)
#define IL2CPP_STRUCT_AmplifyColorEffect_FWDDECL
#include <Modloader/app/structs/AmplifyColorEffect__Class.h>
#endif
#undef IL2CPP_STRUCT_AmplifyColorEffect_INITIALIZING
#if !defined(IL2CPP_STRUCT_AmplifyColorEffect_DEFINED) && !defined(IL2CPP_STRUCT_AmplifyColorEffect_FWDDECL)
#include <Modloader/app/structs/AmplifyColorEffect.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AmplifyColorEffect.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
