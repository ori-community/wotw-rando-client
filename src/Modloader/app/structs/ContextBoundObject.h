#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContextBoundObject_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContextBoundObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContextBoundObject_DEFINED)
#include <Modloader/app/structs/ContextBoundObject__Fields.h>
#if defined(IL2CPP_STRUCT_ContextBoundObject__Fields_DEFINED)
#define IL2CPP_STRUCT_ContextBoundObject_DEFINED
struct ContextBoundObject__Class;
struct ContextBoundObject {
    struct ContextBoundObject__Class* klass;
    MonitorData* monitor;
    struct ContextBoundObject__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ContextBoundObject_FWDDECL)
#define IL2CPP_STRUCT_ContextBoundObject_FWDDECL
#include <Modloader/app/structs/ContextBoundObject__Class.h>
#endif
#undef IL2CPP_STRUCT_ContextBoundObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContextBoundObject_DEFINED) && !defined(IL2CPP_STRUCT_ContextBoundObject_FWDDECL)
#include <Modloader/app/structs/ContextBoundObject.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContextBoundObject.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
