#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MethodInfoCallInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MethodInfoCallInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_MethodInfoCallInstruction_DEFINED)
#include <Modloader/app/structs/MethodInfoCallInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_MethodInfoCallInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_MethodInfoCallInstruction_DEFINED
struct MethodInfoCallInstruction__Class;
struct MethodInfoCallInstruction {
    struct MethodInfoCallInstruction__Class* klass;
    MonitorData* monitor;
    struct MethodInfoCallInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MethodInfoCallInstruction_FWDDECL)
#define IL2CPP_STRUCT_MethodInfoCallInstruction_FWDDECL
#include <Modloader/app/structs/MethodInfoCallInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_MethodInfoCallInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_MethodInfoCallInstruction_DEFINED) && !defined(IL2CPP_STRUCT_MethodInfoCallInstruction_FWDDECL)
#include <Modloader/app/structs/MethodInfoCallInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MethodInfoCallInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
