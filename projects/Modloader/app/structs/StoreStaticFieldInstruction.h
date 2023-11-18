#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StoreStaticFieldInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StoreStaticFieldInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_StoreStaticFieldInstruction_DEFINED)
#include <Modloader/app/structs/StoreStaticFieldInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_StoreStaticFieldInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_StoreStaticFieldInstruction_DEFINED
struct StoreStaticFieldInstruction__Class;
struct StoreStaticFieldInstruction {
    struct StoreStaticFieldInstruction__Class* klass;
    MonitorData* monitor;
    struct StoreStaticFieldInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StoreStaticFieldInstruction_FWDDECL)
#define IL2CPP_STRUCT_StoreStaticFieldInstruction_FWDDECL
#include <Modloader/app/structs/StoreStaticFieldInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_StoreStaticFieldInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_StoreStaticFieldInstruction_DEFINED) && !defined(IL2CPP_STRUCT_StoreStaticFieldInstruction_FWDDECL)
#include <Modloader/app/structs/StoreStaticFieldInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StoreStaticFieldInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
