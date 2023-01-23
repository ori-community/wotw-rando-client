#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContextCallbackObject_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContextCallbackObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContextCallbackObject_DEFINED)
#include <Modloader/app/structs/ContextCallbackObject__Fields.h>
#if defined(IL2CPP_STRUCT_ContextCallbackObject__Fields_DEFINED)
#define IL2CPP_STRUCT_ContextCallbackObject_DEFINED
struct ContextCallbackObject__Class;
struct ContextCallbackObject {
    struct ContextCallbackObject__Class* klass;
    MonitorData* monitor;
    struct ContextCallbackObject__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ContextCallbackObject_FWDDECL)
#define IL2CPP_STRUCT_ContextCallbackObject_FWDDECL
#include <Modloader/app/structs/ContextCallbackObject__Class.h>
#endif
#undef IL2CPP_STRUCT_ContextCallbackObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContextCallbackObject_DEFINED) && !defined(IL2CPP_STRUCT_ContextCallbackObject_FWDDECL)
#include <Modloader/app/structs/ContextCallbackObject.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContextCallbackObject.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
