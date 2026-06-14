#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDataWriter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDataWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDataWriter_DEFINED)
#define IL2CPP_STRUCT_IDataWriter_DEFINED
struct IDataWriter__Class;
struct IDataWriter {
    struct IDataWriter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDataWriter_FWDDECL)
#define IL2CPP_STRUCT_IDataWriter_FWDDECL
#include <Modloader/app/structs/IDataWriter__Class.h>
#endif
#undef IL2CPP_STRUCT_IDataWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDataWriter_DEFINED) && !defined(IL2CPP_STRUCT_IDataWriter_FWDDECL)
#include <Modloader/app/structs/IDataWriter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDataWriter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
