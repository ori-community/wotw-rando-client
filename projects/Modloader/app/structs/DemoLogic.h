#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DemoLogic_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DemoLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_DemoLogic_DEFINED)
#define IL2CPP_STRUCT_DemoLogic_DEFINED
struct DemoLogic__Class;
struct DemoLogic {
    struct DemoLogic__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DemoLogic_FWDDECL)
#define IL2CPP_STRUCT_DemoLogic_FWDDECL
#include <Modloader/app/structs/DemoLogic__Class.h>
#endif
#undef IL2CPP_STRUCT_DemoLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_DemoLogic_DEFINED) && !defined(IL2CPP_STRUCT_DemoLogic_FWDDECL)
#include <Modloader/app/structs/DemoLogic.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DemoLogic.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
