#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StoreLocalBoxedInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StoreLocalBoxedInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_StoreLocalBoxedInstruction_DEFINED)
#include <Modloader/app/structs/StoreLocalBoxedInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_StoreLocalBoxedInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_StoreLocalBoxedInstruction_DEFINED
struct StoreLocalBoxedInstruction__Class;
struct StoreLocalBoxedInstruction {
    struct StoreLocalBoxedInstruction__Class* klass;
    MonitorData* monitor;
    struct StoreLocalBoxedInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StoreLocalBoxedInstruction_FWDDECL)
#define IL2CPP_STRUCT_StoreLocalBoxedInstruction_FWDDECL
#include <Modloader/app/structs/StoreLocalBoxedInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_StoreLocalBoxedInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_StoreLocalBoxedInstruction_DEFINED) && !defined(IL2CPP_STRUCT_StoreLocalBoxedInstruction_FWDDECL)
#include <Modloader/app/structs/StoreLocalBoxedInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StoreLocalBoxedInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
