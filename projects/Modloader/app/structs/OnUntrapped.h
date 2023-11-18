#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OnUntrapped_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OnUntrapped_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnUntrapped_DEFINED)
#define IL2CPP_STRUCT_OnUntrapped_DEFINED
struct OnUntrapped__Class;
struct OnUntrapped {
    struct OnUntrapped__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_OnUntrapped_FWDDECL)
#define IL2CPP_STRUCT_OnUntrapped_FWDDECL
#include <Modloader/app/structs/OnUntrapped__Class.h>
#endif
#undef IL2CPP_STRUCT_OnUntrapped_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnUntrapped_DEFINED) && !defined(IL2CPP_STRUCT_OnUntrapped_FWDDECL)
#include <Modloader/app/structs/OnUntrapped.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OnUntrapped.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
