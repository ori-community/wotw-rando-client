#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GreaterThanInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GreaterThanInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_GreaterThanInstruction_DEFINED)
#include <Modloader/app/structs/GreaterThanInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_GreaterThanInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_GreaterThanInstruction_DEFINED
struct GreaterThanInstruction__Class;
struct GreaterThanInstruction {
    struct GreaterThanInstruction__Class* klass;
    MonitorData* monitor;
    struct GreaterThanInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GreaterThanInstruction_FWDDECL)
#define IL2CPP_STRUCT_GreaterThanInstruction_FWDDECL
#include <Modloader/app/structs/GreaterThanInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_GreaterThanInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_GreaterThanInstruction_DEFINED) && !defined(IL2CPP_STRUCT_GreaterThanInstruction_FWDDECL)
#include <Modloader/app/structs/GreaterThanInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GreaterThanInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
