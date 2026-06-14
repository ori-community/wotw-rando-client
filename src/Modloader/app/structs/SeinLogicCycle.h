#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinLogicCycle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinLogicCycle_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLogicCycle_DEFINED)
#include <Modloader/app/structs/SeinLogicCycle__Fields.h>
#if defined(IL2CPP_STRUCT_SeinLogicCycle__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinLogicCycle_DEFINED
struct SeinLogicCycle__Class;
struct SeinLogicCycle {
    struct SeinLogicCycle__Class* klass;
    MonitorData* monitor;
    struct SeinLogicCycle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinLogicCycle_FWDDECL)
#define IL2CPP_STRUCT_SeinLogicCycle_FWDDECL
#include <Modloader/app/structs/SeinLogicCycle__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinLogicCycle_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLogicCycle_DEFINED) && !defined(IL2CPP_STRUCT_SeinLogicCycle_FWDDECL)
#include <Modloader/app/structs/SeinLogicCycle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinLogicCycle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
