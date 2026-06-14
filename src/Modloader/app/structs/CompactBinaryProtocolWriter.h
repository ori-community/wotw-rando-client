#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CompactBinaryProtocolWriter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CompactBinaryProtocolWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompactBinaryProtocolWriter_DEFINED)
#include <Modloader/app/structs/CompactBinaryProtocolWriter__Fields.h>
#if defined(IL2CPP_STRUCT_CompactBinaryProtocolWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_CompactBinaryProtocolWriter_DEFINED
struct CompactBinaryProtocolWriter__Class;
struct CompactBinaryProtocolWriter {
    struct CompactBinaryProtocolWriter__Class* klass;
    MonitorData* monitor;
    struct CompactBinaryProtocolWriter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CompactBinaryProtocolWriter_FWDDECL)
#define IL2CPP_STRUCT_CompactBinaryProtocolWriter_FWDDECL
#include <Modloader/app/structs/CompactBinaryProtocolWriter__Class.h>
#endif
#undef IL2CPP_STRUCT_CompactBinaryProtocolWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompactBinaryProtocolWriter_DEFINED) && !defined(IL2CPP_STRUCT_CompactBinaryProtocolWriter_FWDDECL)
#include <Modloader/app/structs/CompactBinaryProtocolWriter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CompactBinaryProtocolWriter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
