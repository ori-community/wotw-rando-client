#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HookFlingPlant_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HookFlingPlant_INITIALIZING
#if !defined(IL2CPP_STRUCT_HookFlingPlant_DEFINED)
#include <Modloader/app/structs/HookFlingPlant__Fields.h>
#if defined(IL2CPP_STRUCT_HookFlingPlant__Fields_DEFINED)
#define IL2CPP_STRUCT_HookFlingPlant_DEFINED
struct HookFlingPlant__Class;
struct HookFlingPlant {
    struct HookFlingPlant__Class* klass;
    MonitorData* monitor;
    struct HookFlingPlant__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HookFlingPlant_FWDDECL)
#define IL2CPP_STRUCT_HookFlingPlant_FWDDECL
#include <Modloader/app/structs/HookFlingPlant__Class.h>
#endif
#undef IL2CPP_STRUCT_HookFlingPlant_INITIALIZING
#if !defined(IL2CPP_STRUCT_HookFlingPlant_DEFINED) && !defined(IL2CPP_STRUCT_HookFlingPlant_FWDDECL)
#include <Modloader/app/structs/HookFlingPlant.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HookFlingPlant.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
