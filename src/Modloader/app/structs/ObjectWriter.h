#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectWriter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectWriter_DEFINED)
#include <Modloader/app/structs/ObjectWriter__Fields.h>
#if defined(IL2CPP_STRUCT_ObjectWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_ObjectWriter_DEFINED
struct ObjectWriter__Class;
struct ObjectWriter {
    struct ObjectWriter__Class* klass;
    MonitorData* monitor;
    struct ObjectWriter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ObjectWriter_FWDDECL)
#define IL2CPP_STRUCT_ObjectWriter_FWDDECL
#include <Modloader/app/structs/ObjectWriter__Class.h>
#endif
#undef IL2CPP_STRUCT_ObjectWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectWriter_DEFINED) && !defined(IL2CPP_STRUCT_ObjectWriter_FWDDECL)
#include <Modloader/app/structs/ObjectWriter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectWriter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
