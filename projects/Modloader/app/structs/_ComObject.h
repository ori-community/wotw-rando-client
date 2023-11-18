#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT__ComObject_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT__ComObject_INITIALIZING
#if !defined(IL2CPP_STRUCT__ComObject_DEFINED)
#define IL2CPP_STRUCT__ComObject_DEFINED
struct _ComObject__Class;
struct _ComObject {
    struct _ComObject__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT__ComObject_FWDDECL)
#define IL2CPP_STRUCT__ComObject_FWDDECL
#include <Modloader/app/structs/_ComObject__Class.h>
#endif
#undef IL2CPP_STRUCT__ComObject_INITIALIZING
#if !defined(IL2CPP_STRUCT__ComObject_DEFINED) && !defined(IL2CPP_STRUCT__ComObject_FWDDECL)
#include <Modloader/app/structs/_ComObject.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/_ComObject.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
