#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CFArray_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CFArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFArray_DEFINED)
#include <Modloader/app/structs/CFArray__Fields.h>
#if defined(IL2CPP_STRUCT_CFArray__Fields_DEFINED)
#define IL2CPP_STRUCT_CFArray_DEFINED
struct CFArray__Class;
struct CFArray {
    struct CFArray__Class* klass;
    MonitorData* monitor;
    struct CFArray__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CFArray_FWDDECL)
#define IL2CPP_STRUCT_CFArray_FWDDECL
#include <Modloader/app/structs/CFArray__Class.h>
#endif
#undef IL2CPP_STRUCT_CFArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFArray_DEFINED) && !defined(IL2CPP_STRUCT_CFArray_FWDDECL)
#include <Modloader/app/structs/CFArray.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CFArray.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
