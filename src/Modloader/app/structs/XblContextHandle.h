#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XblContextHandle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XblContextHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_XblContextHandle_DEFINED)
#include <Modloader/app/structs/XblContextHandle__Fields.h>
#if defined(IL2CPP_STRUCT_XblContextHandle__Fields_DEFINED)
#define IL2CPP_STRUCT_XblContextHandle_DEFINED
struct XblContextHandle__Class;
struct XblContextHandle {
    struct XblContextHandle__Class* klass;
    MonitorData* monitor;
    struct XblContextHandle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XblContextHandle_FWDDECL)
#define IL2CPP_STRUCT_XblContextHandle_FWDDECL
#include <Modloader/app/structs/XblContextHandle__Class.h>
#endif
#undef IL2CPP_STRUCT_XblContextHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_XblContextHandle_DEFINED) && !defined(IL2CPP_STRUCT_XblContextHandle_FWDDECL)
#include <Modloader/app/structs/XblContextHandle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XblContextHandle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
