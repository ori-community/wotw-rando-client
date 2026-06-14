#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectReader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectReader_DEFINED)
#include <Modloader/app/structs/ObjectReader__Fields.h>
#if defined(IL2CPP_STRUCT_ObjectReader__Fields_DEFINED)
#define IL2CPP_STRUCT_ObjectReader_DEFINED
struct ObjectReader__Class;
struct ObjectReader {
    struct ObjectReader__Class* klass;
    MonitorData* monitor;
    struct ObjectReader__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ObjectReader_FWDDECL)
#define IL2CPP_STRUCT_ObjectReader_FWDDECL
#include <Modloader/app/structs/ObjectReader__Class.h>
#endif
#undef IL2CPP_STRUCT_ObjectReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectReader_DEFINED) && !defined(IL2CPP_STRUCT_ObjectReader_FWDDECL)
#include <Modloader/app/structs/ObjectReader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectReader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
