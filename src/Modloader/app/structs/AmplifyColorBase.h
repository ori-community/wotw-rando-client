#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AmplifyColorBase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AmplifyColorBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_AmplifyColorBase_DEFINED)
#include <Modloader/app/structs/AmplifyColorBase__Fields.h>
#if defined(IL2CPP_STRUCT_AmplifyColorBase__Fields_DEFINED)
#define IL2CPP_STRUCT_AmplifyColorBase_DEFINED
struct AmplifyColorBase__Class;
struct AmplifyColorBase {
    struct AmplifyColorBase__Class* klass;
    MonitorData* monitor;
    struct AmplifyColorBase__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AmplifyColorBase_FWDDECL)
#define IL2CPP_STRUCT_AmplifyColorBase_FWDDECL
#include <Modloader/app/structs/AmplifyColorBase__Class.h>
#endif
#undef IL2CPP_STRUCT_AmplifyColorBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_AmplifyColorBase_DEFINED) && !defined(IL2CPP_STRUCT_AmplifyColorBase_FWDDECL)
#include <Modloader/app/structs/AmplifyColorBase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AmplifyColorBase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
