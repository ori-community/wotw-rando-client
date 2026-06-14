#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ResourceReader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ResourceReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResourceReader_DEFINED)
#include <Modloader/app/structs/ResourceReader__Fields.h>
#if defined(IL2CPP_STRUCT_ResourceReader__Fields_DEFINED)
#define IL2CPP_STRUCT_ResourceReader_DEFINED
struct ResourceReader__Class;
struct ResourceReader {
    struct ResourceReader__Class* klass;
    MonitorData* monitor;
    struct ResourceReader__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ResourceReader_FWDDECL)
#define IL2CPP_STRUCT_ResourceReader_FWDDECL
#include <Modloader/app/structs/ResourceReader__Class.h>
#endif
#undef IL2CPP_STRUCT_ResourceReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResourceReader_DEFINED) && !defined(IL2CPP_STRUCT_ResourceReader_FWDDECL)
#include <Modloader/app/structs/ResourceReader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ResourceReader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
