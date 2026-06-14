#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlProcessingInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlProcessingInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlProcessingInstruction_DEFINED)
#include <Modloader/app/structs/XmlProcessingInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_XmlProcessingInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlProcessingInstruction_DEFINED
struct XmlProcessingInstruction__Class;
struct XmlProcessingInstruction {
    struct XmlProcessingInstruction__Class* klass;
    MonitorData* monitor;
    struct XmlProcessingInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlProcessingInstruction_FWDDECL)
#define IL2CPP_STRUCT_XmlProcessingInstruction_FWDDECL
#include <Modloader/app/structs/XmlProcessingInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlProcessingInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlProcessingInstruction_DEFINED) && !defined(IL2CPP_STRUCT_XmlProcessingInstruction_FWDDECL)
#include <Modloader/app/structs/XmlProcessingInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlProcessingInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
