#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkReflectionPathInfoArray_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkReflectionPathInfoArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkReflectionPathInfoArray_DEFINED)
#include <Modloader/app/structs/AkReflectionPathInfoArray__Fields.h>
#if defined(IL2CPP_STRUCT_AkReflectionPathInfoArray__Fields_DEFINED)
#define IL2CPP_STRUCT_AkReflectionPathInfoArray_DEFINED
struct AkReflectionPathInfoArray__Class;
struct AkReflectionPathInfoArray {
    struct AkReflectionPathInfoArray__Class* klass;
    MonitorData* monitor;
    struct AkReflectionPathInfoArray__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkReflectionPathInfoArray_FWDDECL)
#define IL2CPP_STRUCT_AkReflectionPathInfoArray_FWDDECL
#include <Modloader/app/structs/AkReflectionPathInfoArray__Class.h>
#endif
#undef IL2CPP_STRUCT_AkReflectionPathInfoArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkReflectionPathInfoArray_DEFINED) && !defined(IL2CPP_STRUCT_AkReflectionPathInfoArray_FWDDECL)
#include <Modloader/app/structs/AkReflectionPathInfoArray.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkReflectionPathInfoArray.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
