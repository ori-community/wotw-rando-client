#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HookPlant_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HookPlant_INITIALIZING
#if !defined(IL2CPP_STRUCT_HookPlant_DEFINED)
#include <Modloader/app/structs/HookPlant__Fields.h>
#if defined(IL2CPP_STRUCT_HookPlant__Fields_DEFINED)
#define IL2CPP_STRUCT_HookPlant_DEFINED
struct HookPlant__Class;
struct HookPlant {
    struct HookPlant__Class* klass;
    MonitorData* monitor;
    struct HookPlant__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HookPlant_FWDDECL)
#define IL2CPP_STRUCT_HookPlant_FWDDECL
#include <Modloader/app/structs/HookPlant__Class.h>
#endif
#undef IL2CPP_STRUCT_HookPlant_INITIALIZING
#if !defined(IL2CPP_STRUCT_HookPlant_DEFINED) && !defined(IL2CPP_STRUCT_HookPlant_FWDDECL)
#include <Modloader/app/structs/HookPlant.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HookPlant.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
