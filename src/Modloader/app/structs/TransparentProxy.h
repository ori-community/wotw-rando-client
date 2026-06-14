#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TransparentProxy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TransparentProxy_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransparentProxy_DEFINED)
#include <Modloader/app/structs/TransparentProxy__Fields.h>
#if defined(IL2CPP_STRUCT_TransparentProxy__Fields_DEFINED)
#define IL2CPP_STRUCT_TransparentProxy_DEFINED
struct TransparentProxy__Class;
struct TransparentProxy {
    struct TransparentProxy__Class* klass;
    MonitorData* monitor;
    struct TransparentProxy__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TransparentProxy_FWDDECL)
#define IL2CPP_STRUCT_TransparentProxy_FWDDECL
#include <Modloader/app/structs/TransparentProxy__Class.h>
#endif
#undef IL2CPP_STRUCT_TransparentProxy_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransparentProxy_DEFINED) && !defined(IL2CPP_STRUCT_TransparentProxy_FWDDECL)
#include <Modloader/app/structs/TransparentProxy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TransparentProxy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
