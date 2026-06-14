#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataBundle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataBundle_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataBundle_DEFINED)
#include <Modloader/app/structs/DataBundle__Fields.h>
#if defined(IL2CPP_STRUCT_DataBundle__Fields_DEFINED)
#define IL2CPP_STRUCT_DataBundle_DEFINED
struct DataBundle__Class;
struct DataBundle {
    struct DataBundle__Class* klass;
    MonitorData* monitor;
    struct DataBundle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataBundle_FWDDECL)
#define IL2CPP_STRUCT_DataBundle_FWDDECL
#include <Modloader/app/structs/DataBundle__Class.h>
#endif
#undef IL2CPP_STRUCT_DataBundle_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataBundle_DEFINED) && !defined(IL2CPP_STRUCT_DataBundle_FWDDECL)
#include <Modloader/app/structs/DataBundle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataBundle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
