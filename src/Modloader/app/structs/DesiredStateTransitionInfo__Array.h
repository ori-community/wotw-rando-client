#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DesiredStateTransitionInfo__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DesiredStateTransitionInfo__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesiredStateTransitionInfo__Array_DEFINED)
#include <Modloader/app/structs/DesiredStateTransitionInfo.h>
#if defined(IL2CPP_STRUCT_DesiredStateTransitionInfo_DEFINED)
#define IL2CPP_STRUCT_DesiredStateTransitionInfo__Array_DEFINED
struct DesiredStateTransitionInfo__Array__Class;
struct DesiredStateTransitionInfo__Array {
    struct DesiredStateTransitionInfo__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct DesiredStateTransitionInfo vector[32];
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DesiredStateTransitionInfo__Array_FWDDECL)
#define IL2CPP_STRUCT_DesiredStateTransitionInfo__Array_FWDDECL
#include <Modloader/app/structs/DesiredStateTransitionInfo__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_DesiredStateTransitionInfo__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesiredStateTransitionInfo__Array_DEFINED) && !defined(IL2CPP_STRUCT_DesiredStateTransitionInfo__Array_FWDDECL)
#include <Modloader/app/structs/DesiredStateTransitionInfo__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DesiredStateTransitionInfo__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
