#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT__BinaryWriter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT__BinaryWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT__BinaryWriter_DEFINED)
#include <Modloader/app/structs/_BinaryWriter__Fields.h>
#if defined(IL2CPP_STRUCT__BinaryWriter__Fields_DEFINED)
#define IL2CPP_STRUCT__BinaryWriter_DEFINED
struct _BinaryWriter__Class;
struct _BinaryWriter {
    struct _BinaryWriter__Class* klass;
    MonitorData* monitor;
    struct _BinaryWriter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT__BinaryWriter_FWDDECL)
#define IL2CPP_STRUCT__BinaryWriter_FWDDECL
#include <Modloader/app/structs/_BinaryWriter__Class.h>
#endif
#undef IL2CPP_STRUCT__BinaryWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT__BinaryWriter_DEFINED) && !defined(IL2CPP_STRUCT__BinaryWriter_FWDDECL)
#include <Modloader/app/structs/_BinaryWriter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/_BinaryWriter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
