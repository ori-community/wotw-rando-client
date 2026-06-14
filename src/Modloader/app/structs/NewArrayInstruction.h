#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NewArrayInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NewArrayInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewArrayInstruction_DEFINED)
#include <Modloader/app/structs/NewArrayInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_NewArrayInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_NewArrayInstruction_DEFINED
struct NewArrayInstruction__Class;
struct NewArrayInstruction {
    struct NewArrayInstruction__Class* klass;
    MonitorData* monitor;
    struct NewArrayInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NewArrayInstruction_FWDDECL)
#define IL2CPP_STRUCT_NewArrayInstruction_FWDDECL
#include <Modloader/app/structs/NewArrayInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_NewArrayInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewArrayInstruction_DEFINED) && !defined(IL2CPP_STRUCT_NewArrayInstruction_FWDDECL)
#include <Modloader/app/structs/NewArrayInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NewArrayInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
