#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XObjectWrapper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XObjectWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_XObjectWrapper_DEFINED)
#include <Modloader/app/structs/XObjectWrapper__Fields.h>
#if defined(IL2CPP_STRUCT_XObjectWrapper__Fields_DEFINED)
#define IL2CPP_STRUCT_XObjectWrapper_DEFINED
struct XObjectWrapper__Class;
struct XObjectWrapper {
    struct XObjectWrapper__Class* klass;
    MonitorData* monitor;
    struct XObjectWrapper__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XObjectWrapper_FWDDECL)
#define IL2CPP_STRUCT_XObjectWrapper_FWDDECL
#include <Modloader/app/structs/XObjectWrapper__Class.h>
#endif
#undef IL2CPP_STRUCT_XObjectWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_XObjectWrapper_DEFINED) && !defined(IL2CPP_STRUCT_XObjectWrapper_FWDDECL)
#include <Modloader/app/structs/XObjectWrapper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XObjectWrapper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
