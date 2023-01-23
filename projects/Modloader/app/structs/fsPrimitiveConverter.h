#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsPrimitiveConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsPrimitiveConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsPrimitiveConverter_DEFINED)
#include <Modloader/app/structs/fsPrimitiveConverter__Fields.h>
#if defined(IL2CPP_STRUCT_fsPrimitiveConverter__Fields_DEFINED)
#define IL2CPP_STRUCT_fsPrimitiveConverter_DEFINED
struct fsPrimitiveConverter__Class;
struct fsPrimitiveConverter {
    struct fsPrimitiveConverter__Class* klass;
    MonitorData* monitor;
    struct fsPrimitiveConverter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_fsPrimitiveConverter_FWDDECL)
#define IL2CPP_STRUCT_fsPrimitiveConverter_FWDDECL
#include <Modloader/app/structs/fsPrimitiveConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_fsPrimitiveConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsPrimitiveConverter_DEFINED) && !defined(IL2CPP_STRUCT_fsPrimitiveConverter_FWDDECL)
#include <Modloader/app/structs/fsPrimitiveConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsPrimitiveConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
