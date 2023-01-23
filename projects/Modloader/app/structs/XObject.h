#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XObject_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_XObject_DEFINED)
#include <Modloader/app/structs/XObject__Fields.h>
#if defined(IL2CPP_STRUCT_XObject__Fields_DEFINED)
#define IL2CPP_STRUCT_XObject_DEFINED
struct XObject__Class;
struct XObject {
    struct XObject__Class* klass;
    MonitorData* monitor;
    struct XObject__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XObject_FWDDECL)
#define IL2CPP_STRUCT_XObject_FWDDECL
#include <Modloader/app/structs/XObject__Class.h>
#endif
#undef IL2CPP_STRUCT_XObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_XObject_DEFINED) && !defined(IL2CPP_STRUCT_XObject_FWDDECL)
#include <Modloader/app/structs/XObject.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XObject.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
