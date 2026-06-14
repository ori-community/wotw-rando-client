#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AndInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AndInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_AndInstruction_DEFINED)
#define IL2CPP_STRUCT_AndInstruction_DEFINED
struct AndInstruction__Class;
struct AndInstruction {
    struct AndInstruction__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AndInstruction_FWDDECL)
#define IL2CPP_STRUCT_AndInstruction_FWDDECL
#include <Modloader/app/structs/AndInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_AndInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_AndInstruction_DEFINED) && !defined(IL2CPP_STRUCT_AndInstruction_FWDDECL)
#include <Modloader/app/structs/AndInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AndInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
