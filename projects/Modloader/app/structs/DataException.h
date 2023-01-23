#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataException_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataException_DEFINED)
#include <Modloader/app/structs/DataException__Fields.h>
#if defined(IL2CPP_STRUCT_DataException__Fields_DEFINED)
#define IL2CPP_STRUCT_DataException_DEFINED
struct DataException__Class;
struct DataException {
    struct DataException__Class* klass;
    MonitorData* monitor;
    struct DataException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataException_FWDDECL)
#define IL2CPP_STRUCT_DataException_FWDDECL
#include <Modloader/app/structs/DataException__Class.h>
#endif
#undef IL2CPP_STRUCT_DataException_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataException_DEFINED) && !defined(IL2CPP_STRUCT_DataException_FWDDECL)
#include <Modloader/app/structs/DataException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
