#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XProcessingInstructionWrapper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XProcessingInstructionWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_XProcessingInstructionWrapper_DEFINED)
#include <Modloader/app/structs/XProcessingInstructionWrapper__Fields.h>
#if defined(IL2CPP_STRUCT_XProcessingInstructionWrapper__Fields_DEFINED)
#define IL2CPP_STRUCT_XProcessingInstructionWrapper_DEFINED
struct XProcessingInstructionWrapper__Class;
struct XProcessingInstructionWrapper {
    struct XProcessingInstructionWrapper__Class* klass;
    MonitorData* monitor;
    struct XProcessingInstructionWrapper__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XProcessingInstructionWrapper_FWDDECL)
#define IL2CPP_STRUCT_XProcessingInstructionWrapper_FWDDECL
#include <Modloader/app/structs/XProcessingInstructionWrapper__Class.h>
#endif
#undef IL2CPP_STRUCT_XProcessingInstructionWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_XProcessingInstructionWrapper_DEFINED) && !defined(IL2CPP_STRUCT_XProcessingInstructionWrapper_FWDDECL)
#include <Modloader/app/structs/XProcessingInstructionWrapper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XProcessingInstructionWrapper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
