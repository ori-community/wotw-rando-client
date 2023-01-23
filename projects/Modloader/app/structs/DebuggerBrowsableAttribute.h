#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebuggerBrowsableAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebuggerBrowsableAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebuggerBrowsableAttribute_DEFINED)
#include <Modloader/app/structs/DebuggerBrowsableAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_DebuggerBrowsableAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_DebuggerBrowsableAttribute_DEFINED
struct DebuggerBrowsableAttribute__Class;
struct DebuggerBrowsableAttribute {
    struct DebuggerBrowsableAttribute__Class* klass;
    MonitorData* monitor;
    struct DebuggerBrowsableAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebuggerBrowsableAttribute_FWDDECL)
#define IL2CPP_STRUCT_DebuggerBrowsableAttribute_FWDDECL
#include <Modloader/app/structs/DebuggerBrowsableAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_DebuggerBrowsableAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebuggerBrowsableAttribute_DEFINED) && !defined(IL2CPP_STRUCT_DebuggerBrowsableAttribute_FWDDECL)
#include <Modloader/app/structs/DebuggerBrowsableAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebuggerBrowsableAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
