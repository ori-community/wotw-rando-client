#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LessThanInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LessThanInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LessThanInstruction_DEFINED)
#include <Modloader/app/structs/LessThanInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_LessThanInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_LessThanInstruction_DEFINED
struct LessThanInstruction__Class;
struct LessThanInstruction {
    struct LessThanInstruction__Class* klass;
    MonitorData* monitor;
    struct LessThanInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LessThanInstruction_FWDDECL)
#define IL2CPP_STRUCT_LessThanInstruction_FWDDECL
#include <Modloader/app/structs/LessThanInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_LessThanInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LessThanInstruction_DEFINED) && !defined(IL2CPP_STRUCT_LessThanInstruction_FWDDECL)
#include <Modloader/app/structs/LessThanInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LessThanInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
