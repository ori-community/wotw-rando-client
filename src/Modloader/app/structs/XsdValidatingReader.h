#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XsdValidatingReader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XsdValidatingReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdValidatingReader_DEFINED)
#include <Modloader/app/structs/XsdValidatingReader__Fields.h>
#if defined(IL2CPP_STRUCT_XsdValidatingReader__Fields_DEFINED)
#define IL2CPP_STRUCT_XsdValidatingReader_DEFINED
struct XsdValidatingReader__Class;
struct XsdValidatingReader {
    struct XsdValidatingReader__Class* klass;
    MonitorData* monitor;
    struct XsdValidatingReader__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XsdValidatingReader_FWDDECL)
#define IL2CPP_STRUCT_XsdValidatingReader_FWDDECL
#include <Modloader/app/structs/XsdValidatingReader__Class.h>
#endif
#undef IL2CPP_STRUCT_XsdValidatingReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdValidatingReader_DEFINED) && !defined(IL2CPP_STRUCT_XsdValidatingReader_FWDDECL)
#include <Modloader/app/structs/XsdValidatingReader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XsdValidatingReader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
