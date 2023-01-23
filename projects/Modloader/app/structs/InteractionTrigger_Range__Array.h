#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionTrigger_Range__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionTrigger_Range__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionTrigger_Range__Array_DEFINED)
#define IL2CPP_STRUCT_InteractionTrigger_Range__Array_DEFINED
struct InteractionTrigger_Range__Array__Class;
struct InteractionTrigger_Range;
struct InteractionTrigger_Range__Array {
    struct InteractionTrigger_Range__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct InteractionTrigger_Range* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_InteractionTrigger_Range__Array_FWDDECL)
#define IL2CPP_STRUCT_InteractionTrigger_Range__Array_FWDDECL
#include <Modloader/app/structs/InteractionTrigger_Range.h>
#include <Modloader/app/structs/InteractionTrigger_Range__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_InteractionTrigger_Range__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionTrigger_Range__Array_DEFINED) && !defined(IL2CPP_STRUCT_InteractionTrigger_Range__Array_FWDDECL)
#include <Modloader/app/structs/InteractionTrigger_Range__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionTrigger_Range__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
