#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DefaultValueInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DefaultValueInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultValueInstruction_DEFINED)
#include <Modloader/app/structs/DefaultValueInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_DefaultValueInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_DefaultValueInstruction_DEFINED
struct DefaultValueInstruction__Class;
struct DefaultValueInstruction {
    struct DefaultValueInstruction__Class* klass;
    MonitorData* monitor;
    struct DefaultValueInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DefaultValueInstruction_FWDDECL)
#define IL2CPP_STRUCT_DefaultValueInstruction_FWDDECL
#include <Modloader/app/structs/DefaultValueInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_DefaultValueInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultValueInstruction_DEFINED) && !defined(IL2CPP_STRUCT_DefaultValueInstruction_FWDDECL)
#include <Modloader/app/structs/DefaultValueInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DefaultValueInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
