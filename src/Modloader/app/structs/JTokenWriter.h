#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JTokenWriter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JTokenWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_JTokenWriter_DEFINED)
#include <Modloader/app/structs/JTokenWriter__Fields.h>
#if defined(IL2CPP_STRUCT_JTokenWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_JTokenWriter_DEFINED
struct JTokenWriter__Class;
struct JTokenWriter {
    struct JTokenWriter__Class* klass;
    MonitorData* monitor;
    struct JTokenWriter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JTokenWriter_FWDDECL)
#define IL2CPP_STRUCT_JTokenWriter_FWDDECL
#include <Modloader/app/structs/JTokenWriter__Class.h>
#endif
#undef IL2CPP_STRUCT_JTokenWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_JTokenWriter_DEFINED) && !defined(IL2CPP_STRUCT_JTokenWriter_FWDDECL)
#include <Modloader/app/structs/JTokenWriter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JTokenWriter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
