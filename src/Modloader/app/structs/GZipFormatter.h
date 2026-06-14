#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GZipFormatter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GZipFormatter_INITIALIZING
#if !defined(IL2CPP_STRUCT_GZipFormatter_DEFINED)
#include <Modloader/app/structs/GZipFormatter__Fields.h>
#if defined(IL2CPP_STRUCT_GZipFormatter__Fields_DEFINED)
#define IL2CPP_STRUCT_GZipFormatter_DEFINED
struct GZipFormatter__Class;
struct GZipFormatter {
    struct GZipFormatter__Class* klass;
    MonitorData* monitor;
    struct GZipFormatter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GZipFormatter_FWDDECL)
#define IL2CPP_STRUCT_GZipFormatter_FWDDECL
#include <Modloader/app/structs/GZipFormatter__Class.h>
#endif
#undef IL2CPP_STRUCT_GZipFormatter_INITIALIZING
#if !defined(IL2CPP_STRUCT_GZipFormatter_DEFINED) && !defined(IL2CPP_STRUCT_GZipFormatter_FWDDECL)
#include <Modloader/app/structs/GZipFormatter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GZipFormatter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
