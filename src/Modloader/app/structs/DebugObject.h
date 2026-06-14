#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugObject_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugObject_DEFINED)
#include <Modloader/app/structs/DebugObject__Fields.h>
#if defined(IL2CPP_STRUCT_DebugObject__Fields_DEFINED)
#define IL2CPP_STRUCT_DebugObject_DEFINED
struct DebugObject__Class;
struct DebugObject {
    struct DebugObject__Class* klass;
    MonitorData* monitor;
    struct DebugObject__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugObject_FWDDECL)
#define IL2CPP_STRUCT_DebugObject_FWDDECL
#include <Modloader/app/structs/DebugObject__Class.h>
#endif
#undef IL2CPP_STRUCT_DebugObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugObject_DEFINED) && !defined(IL2CPP_STRUCT_DebugObject_FWDDECL)
#include <Modloader/app/structs/DebugObject.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugObject.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
