#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsDictionaryConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsDictionaryConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsDictionaryConverter_DEFINED)
#include <Modloader/app/structs/fsDictionaryConverter__Fields.h>
#if defined(IL2CPP_STRUCT_fsDictionaryConverter__Fields_DEFINED)
#define IL2CPP_STRUCT_fsDictionaryConverter_DEFINED
struct fsDictionaryConverter__Class;
struct fsDictionaryConverter {
    struct fsDictionaryConverter__Class* klass;
    MonitorData* monitor;
    struct fsDictionaryConverter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_fsDictionaryConverter_FWDDECL)
#define IL2CPP_STRUCT_fsDictionaryConverter_FWDDECL
#include <Modloader/app/structs/fsDictionaryConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_fsDictionaryConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsDictionaryConverter_DEFINED) && !defined(IL2CPP_STRUCT_fsDictionaryConverter_FWDDECL)
#include <Modloader/app/structs/fsDictionaryConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsDictionaryConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
