#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParamsArray__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParamsArray__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParamsArray__Boxed_DEFINED)
#include <Modloader/app/structs/ParamsArray.h>
#if defined(IL2CPP_STRUCT_ParamsArray_DEFINED)
#define IL2CPP_STRUCT_ParamsArray__Boxed_DEFINED
struct ParamsArray__Class;
struct ParamsArray__Boxed {
    struct ParamsArray__Class* klass;
    MonitorData* monitor;
    struct ParamsArray fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ParamsArray__Boxed_FWDDECL)
#define IL2CPP_STRUCT_ParamsArray__Boxed_FWDDECL
#include <Modloader/app/structs/ParamsArray__Class.h>
#endif
#undef IL2CPP_STRUCT_ParamsArray__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParamsArray__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_ParamsArray__Boxed_FWDDECL)
#include <Modloader/app/structs/ParamsArray__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParamsArray__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
