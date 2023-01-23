#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BinaryWriter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BinaryWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryWriter_DEFINED)
#include <Modloader/app/structs/BinaryWriter__Fields.h>
#if defined(IL2CPP_STRUCT_BinaryWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_BinaryWriter_DEFINED
struct BinaryWriter__Class;
struct BinaryWriter {
    struct BinaryWriter__Class* klass;
    MonitorData* monitor;
    struct BinaryWriter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BinaryWriter_FWDDECL)
#define IL2CPP_STRUCT_BinaryWriter_FWDDECL
#include <Modloader/app/structs/BinaryWriter__Class.h>
#endif
#undef IL2CPP_STRUCT_BinaryWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryWriter_DEFINED) && !defined(IL2CPP_STRUCT_BinaryWriter_FWDDECL)
#include <Modloader/app/structs/BinaryWriter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BinaryWriter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
