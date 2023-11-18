#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MarshalByRefObject_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MarshalByRefObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_MarshalByRefObject_DEFINED)
#include <Modloader/app/structs/MarshalByRefObject__Fields.h>
#if defined(IL2CPP_STRUCT_MarshalByRefObject__Fields_DEFINED)
#define IL2CPP_STRUCT_MarshalByRefObject_DEFINED
struct MarshalByRefObject__Class;
struct MarshalByRefObject {
    struct MarshalByRefObject__Class* klass;
    MonitorData* monitor;
    struct MarshalByRefObject__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MarshalByRefObject_FWDDECL)
#define IL2CPP_STRUCT_MarshalByRefObject_FWDDECL
#include <Modloader/app/structs/MarshalByRefObject__Class.h>
#endif
#undef IL2CPP_STRUCT_MarshalByRefObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_MarshalByRefObject_DEFINED) && !defined(IL2CPP_STRUCT_MarshalByRefObject_FWDDECL)
#include <Modloader/app/structs/MarshalByRefObject.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MarshalByRefObject.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
