#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocalAccessInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocalAccessInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalAccessInstruction_DEFINED)
#include <Modloader/app/structs/LocalAccessInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_LocalAccessInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_LocalAccessInstruction_DEFINED
struct LocalAccessInstruction__Class;
struct LocalAccessInstruction {
    struct LocalAccessInstruction__Class* klass;
    MonitorData* monitor;
    struct LocalAccessInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LocalAccessInstruction_FWDDECL)
#define IL2CPP_STRUCT_LocalAccessInstruction_FWDDECL
#include <Modloader/app/structs/LocalAccessInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_LocalAccessInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalAccessInstruction_DEFINED) && !defined(IL2CPP_STRUCT_LocalAccessInstruction_FWDDECL)
#include <Modloader/app/structs/LocalAccessInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocalAccessInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
