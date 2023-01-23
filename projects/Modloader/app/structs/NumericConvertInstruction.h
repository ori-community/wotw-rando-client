#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NumericConvertInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NumericConvertInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_NumericConvertInstruction_DEFINED)
#include <Modloader/app/structs/NumericConvertInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_NumericConvertInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_NumericConvertInstruction_DEFINED
struct NumericConvertInstruction__Class;
struct NumericConvertInstruction {
    struct NumericConvertInstruction__Class* klass;
    MonitorData* monitor;
    struct NumericConvertInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NumericConvertInstruction_FWDDECL)
#define IL2CPP_STRUCT_NumericConvertInstruction_FWDDECL
#include <Modloader/app/structs/NumericConvertInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_NumericConvertInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_NumericConvertInstruction_DEFINED) && !defined(IL2CPP_STRUCT_NumericConvertInstruction_FWDDECL)
#include <Modloader/app/structs/NumericConvertInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NumericConvertInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
