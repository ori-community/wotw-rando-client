#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ByRefNewInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ByRefNewInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ByRefNewInstruction_DEFINED)
#include <Modloader/app/structs/ByRefNewInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_ByRefNewInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_ByRefNewInstruction_DEFINED
struct ByRefNewInstruction__Class;
struct ByRefNewInstruction {
    struct ByRefNewInstruction__Class* klass;
    MonitorData* monitor;
    struct ByRefNewInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ByRefNewInstruction_FWDDECL)
#define IL2CPP_STRUCT_ByRefNewInstruction_FWDDECL
#include <Modloader/app/structs/ByRefNewInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_ByRefNewInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ByRefNewInstruction_DEFINED) && !defined(IL2CPP_STRUCT_ByRefNewInstruction_FWDDECL)
#include <Modloader/app/structs/ByRefNewInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ByRefNewInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
