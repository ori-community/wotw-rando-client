#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SizedArray_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SizedArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_SizedArray_DEFINED)
#include <Modloader/app/structs/SizedArray__Fields.h>
#if defined(IL2CPP_STRUCT_SizedArray__Fields_DEFINED)
#define IL2CPP_STRUCT_SizedArray_DEFINED
struct SizedArray__Class;
struct SizedArray {
    struct SizedArray__Class* klass;
    MonitorData* monitor;
    struct SizedArray__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SizedArray_FWDDECL)
#define IL2CPP_STRUCT_SizedArray_FWDDECL
#include <Modloader/app/structs/SizedArray__Class.h>
#endif
#undef IL2CPP_STRUCT_SizedArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_SizedArray_DEFINED) && !defined(IL2CPP_STRUCT_SizedArray_FWDDECL)
#include <Modloader/app/structs/SizedArray.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SizedArray.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
