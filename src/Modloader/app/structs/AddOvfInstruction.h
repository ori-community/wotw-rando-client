#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AddOvfInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AddOvfInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddOvfInstruction_DEFINED)
#define IL2CPP_STRUCT_AddOvfInstruction_DEFINED
struct AddOvfInstruction__Class;
struct AddOvfInstruction {
    struct AddOvfInstruction__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AddOvfInstruction_FWDDECL)
#define IL2CPP_STRUCT_AddOvfInstruction_FWDDECL
#include <Modloader/app/structs/AddOvfInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_AddOvfInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddOvfInstruction_DEFINED) && !defined(IL2CPP_STRUCT_AddOvfInstruction_FWDDECL)
#include <Modloader/app/structs/AddOvfInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AddOvfInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
