#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XContainerWrapper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XContainerWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_XContainerWrapper_DEFINED)
#include <Modloader/app/structs/XContainerWrapper__Fields.h>
#if defined(IL2CPP_STRUCT_XContainerWrapper__Fields_DEFINED)
#define IL2CPP_STRUCT_XContainerWrapper_DEFINED
struct XContainerWrapper__Class;
struct XContainerWrapper {
    struct XContainerWrapper__Class* klass;
    MonitorData* monitor;
    struct XContainerWrapper__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XContainerWrapper_FWDDECL)
#define IL2CPP_STRUCT_XContainerWrapper_FWDDECL
#include <Modloader/app/structs/XContainerWrapper__Class.h>
#endif
#undef IL2CPP_STRUCT_XContainerWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_XContainerWrapper_DEFINED) && !defined(IL2CPP_STRUCT_XContainerWrapper_FWDDECL)
#include <Modloader/app/structs/XContainerWrapper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XContainerWrapper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
