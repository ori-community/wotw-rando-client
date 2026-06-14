#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ValidatingReaderNodeData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ValidatingReaderNodeData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValidatingReaderNodeData_DEFINED)
#include <Modloader/app/structs/ValidatingReaderNodeData__Fields.h>
#if defined(IL2CPP_STRUCT_ValidatingReaderNodeData__Fields_DEFINED)
#define IL2CPP_STRUCT_ValidatingReaderNodeData_DEFINED
struct ValidatingReaderNodeData__Class;
struct ValidatingReaderNodeData {
    struct ValidatingReaderNodeData__Class* klass;
    MonitorData* monitor;
    struct ValidatingReaderNodeData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ValidatingReaderNodeData_FWDDECL)
#define IL2CPP_STRUCT_ValidatingReaderNodeData_FWDDECL
#include <Modloader/app/structs/ValidatingReaderNodeData__Class.h>
#endif
#undef IL2CPP_STRUCT_ValidatingReaderNodeData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValidatingReaderNodeData_DEFINED) && !defined(IL2CPP_STRUCT_ValidatingReaderNodeData_FWDDECL)
#include <Modloader/app/structs/ValidatingReaderNodeData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ValidatingReaderNodeData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
