#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JArray_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_JArray_DEFINED)
#include <Modloader/app/structs/JArray__Fields.h>
#if defined(IL2CPP_STRUCT_JArray__Fields_DEFINED)
#define IL2CPP_STRUCT_JArray_DEFINED
struct JArray__Class;
struct JArray {
    struct JArray__Class* klass;
    MonitorData* monitor;
    struct JArray__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JArray_FWDDECL)
#define IL2CPP_STRUCT_JArray_FWDDECL
#include <Modloader/app/structs/JArray__Class.h>
#endif
#undef IL2CPP_STRUCT_JArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_JArray_DEFINED) && !defined(IL2CPP_STRUCT_JArray_FWDDECL)
#include <Modloader/app/structs/JArray.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JArray.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
