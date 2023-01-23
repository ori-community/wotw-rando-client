#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XProcessingInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XProcessingInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_XProcessingInstruction_DEFINED)
#include <Modloader/app/structs/XProcessingInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_XProcessingInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_XProcessingInstruction_DEFINED
struct XProcessingInstruction__Class;
struct XProcessingInstruction {
    struct XProcessingInstruction__Class* klass;
    MonitorData* monitor;
    struct XProcessingInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XProcessingInstruction_FWDDECL)
#define IL2CPP_STRUCT_XProcessingInstruction_FWDDECL
#include <Modloader/app/structs/XProcessingInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_XProcessingInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_XProcessingInstruction_DEFINED) && !defined(IL2CPP_STRUCT_XProcessingInstruction_FWDDECL)
#include <Modloader/app/structs/XProcessingInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XProcessingInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
