#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CreateDelegateInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CreateDelegateInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateDelegateInstruction_DEFINED)
#include <Modloader/app/structs/CreateDelegateInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_CreateDelegateInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_CreateDelegateInstruction_DEFINED
struct CreateDelegateInstruction__Class;
struct CreateDelegateInstruction {
    struct CreateDelegateInstruction__Class* klass;
    MonitorData* monitor;
    struct CreateDelegateInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CreateDelegateInstruction_FWDDECL)
#define IL2CPP_STRUCT_CreateDelegateInstruction_FWDDECL
#include <Modloader/app/structs/CreateDelegateInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_CreateDelegateInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateDelegateInstruction_DEFINED) && !defined(IL2CPP_STRUCT_CreateDelegateInstruction_FWDDECL)
#include <Modloader/app/structs/CreateDelegateInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CreateDelegateInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
