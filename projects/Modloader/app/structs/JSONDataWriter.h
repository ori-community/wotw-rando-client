#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JSONDataWriter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JSONDataWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_JSONDataWriter_DEFINED)
#include <Modloader/app/structs/JSONDataWriter__Fields.h>
#if defined(IL2CPP_STRUCT_JSONDataWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_JSONDataWriter_DEFINED
struct JSONDataWriter__Class;
struct JSONDataWriter {
    struct JSONDataWriter__Class* klass;
    MonitorData* monitor;
    struct JSONDataWriter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JSONDataWriter_FWDDECL)
#define IL2CPP_STRUCT_JSONDataWriter_FWDDECL
#include <Modloader/app/structs/JSONDataWriter__Class.h>
#endif
#undef IL2CPP_STRUCT_JSONDataWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_JSONDataWriter_DEFINED) && !defined(IL2CPP_STRUCT_JSONDataWriter_FWDDECL)
#include <Modloader/app/structs/JSONDataWriter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JSONDataWriter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
