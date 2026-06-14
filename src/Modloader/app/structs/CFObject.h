#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CFObject_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CFObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFObject_DEFINED)
#include <Modloader/app/structs/CFObject__Fields.h>
#if defined(IL2CPP_STRUCT_CFObject__Fields_DEFINED)
#define IL2CPP_STRUCT_CFObject_DEFINED
struct CFObject__Class;
struct CFObject {
    struct CFObject__Class* klass;
    MonitorData* monitor;
    struct CFObject__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CFObject_FWDDECL)
#define IL2CPP_STRUCT_CFObject_FWDDECL
#include <Modloader/app/structs/CFObject__Class.h>
#endif
#undef IL2CPP_STRUCT_CFObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFObject_DEFINED) && !defined(IL2CPP_STRUCT_CFObject_FWDDECL)
#include <Modloader/app/structs/CFObject.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CFObject.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
