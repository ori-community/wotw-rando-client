#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QuoteInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QuoteInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuoteInstruction_DEFINED)
#include <Modloader/app/structs/QuoteInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_QuoteInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_QuoteInstruction_DEFINED
struct QuoteInstruction__Class;
struct QuoteInstruction {
    struct QuoteInstruction__Class* klass;
    MonitorData* monitor;
    struct QuoteInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QuoteInstruction_FWDDECL)
#define IL2CPP_STRUCT_QuoteInstruction_FWDDECL
#include <Modloader/app/structs/QuoteInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_QuoteInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuoteInstruction_DEFINED) && !defined(IL2CPP_STRUCT_QuoteInstruction_FWDDECL)
#include <Modloader/app/structs/QuoteInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QuoteInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
