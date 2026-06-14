#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StoreFieldInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StoreFieldInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_StoreFieldInstruction_DEFINED)
#include <Modloader/app/structs/StoreFieldInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_StoreFieldInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_StoreFieldInstruction_DEFINED
struct StoreFieldInstruction__Class;
struct StoreFieldInstruction {
    struct StoreFieldInstruction__Class* klass;
    MonitorData* monitor;
    struct StoreFieldInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StoreFieldInstruction_FWDDECL)
#define IL2CPP_STRUCT_StoreFieldInstruction_FWDDECL
#include <Modloader/app/structs/StoreFieldInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_StoreFieldInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_StoreFieldInstruction_DEFINED) && !defined(IL2CPP_STRUCT_StoreFieldInstruction_FWDDECL)
#include <Modloader/app/structs/StoreFieldInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StoreFieldInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
