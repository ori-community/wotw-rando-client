#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoadCachedObjectInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoadCachedObjectInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadCachedObjectInstruction_DEFINED)
#include <Modloader/app/structs/LoadCachedObjectInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_LoadCachedObjectInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_LoadCachedObjectInstruction_DEFINED
struct LoadCachedObjectInstruction__Class;
struct LoadCachedObjectInstruction {
    struct LoadCachedObjectInstruction__Class* klass;
    MonitorData* monitor;
    struct LoadCachedObjectInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoadCachedObjectInstruction_FWDDECL)
#define IL2CPP_STRUCT_LoadCachedObjectInstruction_FWDDECL
#include <Modloader/app/structs/LoadCachedObjectInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_LoadCachedObjectInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadCachedObjectInstruction_DEFINED) && !defined(IL2CPP_STRUCT_LoadCachedObjectInstruction_FWDDECL)
#include <Modloader/app/structs/LoadCachedObjectInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoadCachedObjectInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
