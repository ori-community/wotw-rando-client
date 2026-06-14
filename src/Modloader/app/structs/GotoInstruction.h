#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GotoInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GotoInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_GotoInstruction_DEFINED)
#include <Modloader/app/structs/GotoInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_GotoInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_GotoInstruction_DEFINED
struct GotoInstruction__Class;
struct GotoInstruction {
    struct GotoInstruction__Class* klass;
    MonitorData* monitor;
    struct GotoInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GotoInstruction_FWDDECL)
#define IL2CPP_STRUCT_GotoInstruction_FWDDECL
#include <Modloader/app/structs/GotoInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_GotoInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_GotoInstruction_DEFINED) && !defined(IL2CPP_STRUCT_GotoInstruction_FWDDECL)
#include <Modloader/app/structs/GotoInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GotoInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
