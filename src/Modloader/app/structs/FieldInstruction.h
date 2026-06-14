#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FieldInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FieldInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_FieldInstruction_DEFINED)
#include <Modloader/app/structs/FieldInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_FieldInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_FieldInstruction_DEFINED
struct FieldInstruction__Class;
struct FieldInstruction {
    struct FieldInstruction__Class* klass;
    MonitorData* monitor;
    struct FieldInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FieldInstruction_FWDDECL)
#define IL2CPP_STRUCT_FieldInstruction_FWDDECL
#include <Modloader/app/structs/FieldInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_FieldInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_FieldInstruction_DEFINED) && !defined(IL2CPP_STRUCT_FieldInstruction_FWDDECL)
#include <Modloader/app/structs/FieldInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FieldInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
