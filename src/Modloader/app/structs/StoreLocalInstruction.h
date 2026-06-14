#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StoreLocalInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StoreLocalInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_StoreLocalInstruction_DEFINED)
#include <Modloader/app/structs/StoreLocalInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_StoreLocalInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_StoreLocalInstruction_DEFINED
struct StoreLocalInstruction__Class;
struct StoreLocalInstruction {
    struct StoreLocalInstruction__Class* klass;
    MonitorData* monitor;
    struct StoreLocalInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StoreLocalInstruction_FWDDECL)
#define IL2CPP_STRUCT_StoreLocalInstruction_FWDDECL
#include <Modloader/app/structs/StoreLocalInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_StoreLocalInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_StoreLocalInstruction_DEFINED) && !defined(IL2CPP_STRUCT_StoreLocalInstruction_FWDDECL)
#include <Modloader/app/structs/StoreLocalInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StoreLocalInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
