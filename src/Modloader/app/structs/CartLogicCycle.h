#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartLogicCycle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartLogicCycle_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartLogicCycle_DEFINED)
#include <Modloader/app/structs/CartLogicCycle__Fields.h>
#if defined(IL2CPP_STRUCT_CartLogicCycle__Fields_DEFINED)
#define IL2CPP_STRUCT_CartLogicCycle_DEFINED
struct CartLogicCycle__Class;
struct CartLogicCycle {
    struct CartLogicCycle__Class* klass;
    MonitorData* monitor;
    struct CartLogicCycle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CartLogicCycle_FWDDECL)
#define IL2CPP_STRUCT_CartLogicCycle_FWDDECL
#include <Modloader/app/structs/CartLogicCycle__Class.h>
#endif
#undef IL2CPP_STRUCT_CartLogicCycle_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartLogicCycle_DEFINED) && !defined(IL2CPP_STRUCT_CartLogicCycle_FWDDECL)
#include <Modloader/app/structs/CartLogicCycle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartLogicCycle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
