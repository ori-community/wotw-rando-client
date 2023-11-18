#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NewInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NewInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewInstruction_DEFINED)
#include <Modloader/app/structs/NewInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_NewInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_NewInstruction_DEFINED
struct NewInstruction__Class;
struct NewInstruction {
    struct NewInstruction__Class* klass;
    MonitorData* monitor;
    struct NewInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NewInstruction_FWDDECL)
#define IL2CPP_STRUCT_NewInstruction_FWDDECL
#include <Modloader/app/structs/NewInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_NewInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewInstruction_DEFINED) && !defined(IL2CPP_STRUCT_NewInstruction_FWDDECL)
#include <Modloader/app/structs/NewInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NewInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
