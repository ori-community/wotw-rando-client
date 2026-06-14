#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwitchFlow_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwitchFlow_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchFlow_DEFINED)
#include <Modloader/app/structs/SwitchFlow__Fields.h>
#if defined(IL2CPP_STRUCT_SwitchFlow__Fields_DEFINED)
#define IL2CPP_STRUCT_SwitchFlow_DEFINED
struct SwitchFlow__Class;
struct SwitchFlow {
    struct SwitchFlow__Class* klass;
    MonitorData* monitor;
    struct SwitchFlow__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwitchFlow_FWDDECL)
#define IL2CPP_STRUCT_SwitchFlow_FWDDECL
#include <Modloader/app/structs/SwitchFlow__Class.h>
#endif
#undef IL2CPP_STRUCT_SwitchFlow_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchFlow_DEFINED) && !defined(IL2CPP_STRUCT_SwitchFlow_FWDDECL)
#include <Modloader/app/structs/SwitchFlow.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwitchFlow.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
