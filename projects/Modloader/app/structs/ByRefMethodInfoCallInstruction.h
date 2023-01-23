#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ByRefMethodInfoCallInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ByRefMethodInfoCallInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ByRefMethodInfoCallInstruction_DEFINED)
#include <Modloader/app/structs/ByRefMethodInfoCallInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_ByRefMethodInfoCallInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_ByRefMethodInfoCallInstruction_DEFINED
struct ByRefMethodInfoCallInstruction__Class;
struct ByRefMethodInfoCallInstruction {
    struct ByRefMethodInfoCallInstruction__Class* klass;
    MonitorData* monitor;
    struct ByRefMethodInfoCallInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ByRefMethodInfoCallInstruction_FWDDECL)
#define IL2CPP_STRUCT_ByRefMethodInfoCallInstruction_FWDDECL
#include <Modloader/app/structs/ByRefMethodInfoCallInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_ByRefMethodInfoCallInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ByRefMethodInfoCallInstruction_DEFINED) && !defined(IL2CPP_STRUCT_ByRefMethodInfoCallInstruction_FWDDECL)
#include <Modloader/app/structs/ByRefMethodInfoCallInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ByRefMethodInfoCallInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
