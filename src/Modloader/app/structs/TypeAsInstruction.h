#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeAsInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeAsInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeAsInstruction_DEFINED)
#include <Modloader/app/structs/TypeAsInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_TypeAsInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_TypeAsInstruction_DEFINED
struct TypeAsInstruction__Class;
struct TypeAsInstruction {
    struct TypeAsInstruction__Class* klass;
    MonitorData* monitor;
    struct TypeAsInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TypeAsInstruction_FWDDECL)
#define IL2CPP_STRUCT_TypeAsInstruction_FWDDECL
#include <Modloader/app/structs/TypeAsInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_TypeAsInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeAsInstruction_DEFINED) && !defined(IL2CPP_STRUCT_TypeAsInstruction_FWDDECL)
#include <Modloader/app/structs/TypeAsInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeAsInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
