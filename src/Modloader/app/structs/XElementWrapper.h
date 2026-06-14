#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XElementWrapper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XElementWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_XElementWrapper_DEFINED)
#include <Modloader/app/structs/XElementWrapper__Fields.h>
#if defined(IL2CPP_STRUCT_XElementWrapper__Fields_DEFINED)
#define IL2CPP_STRUCT_XElementWrapper_DEFINED
struct XElementWrapper__Class;
struct XElementWrapper {
    struct XElementWrapper__Class* klass;
    MonitorData* monitor;
    struct XElementWrapper__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XElementWrapper_FWDDECL)
#define IL2CPP_STRUCT_XElementWrapper_FWDDECL
#include <Modloader/app/structs/XElementWrapper__Class.h>
#endif
#undef IL2CPP_STRUCT_XElementWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_XElementWrapper_DEFINED) && !defined(IL2CPP_STRUCT_XElementWrapper_FWDDECL)
#include <Modloader/app/structs/XElementWrapper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XElementWrapper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
