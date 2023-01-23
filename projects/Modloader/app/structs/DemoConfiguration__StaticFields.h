#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DemoConfiguration__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DemoConfiguration__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DemoConfiguration__StaticFields_DEFINED)
#define IL2CPP_STRUCT_DemoConfiguration__StaticFields_DEFINED
struct DemoConfiguration__StaticFields {
    bool TimeoutsEnabled;
    float InGameIdleTimeout;
    float InGamePlayTimeTimeout;
};
#endif
#if !defined(IL2CPP_STRUCT_DemoConfiguration__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_DemoConfiguration__StaticFields_FWDDECL
#endif
#undef IL2CPP_STRUCT_DemoConfiguration__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DemoConfiguration__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_DemoConfiguration__StaticFields_FWDDECL)
#include <Modloader/app/structs/DemoConfiguration__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DemoConfiguration__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
