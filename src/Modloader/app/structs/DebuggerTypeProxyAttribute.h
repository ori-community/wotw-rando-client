#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebuggerTypeProxyAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebuggerTypeProxyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebuggerTypeProxyAttribute_DEFINED)
#include <Modloader/app/structs/DebuggerTypeProxyAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_DebuggerTypeProxyAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_DebuggerTypeProxyAttribute_DEFINED
struct DebuggerTypeProxyAttribute__Class;
struct DebuggerTypeProxyAttribute {
    struct DebuggerTypeProxyAttribute__Class* klass;
    MonitorData* monitor;
    struct DebuggerTypeProxyAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebuggerTypeProxyAttribute_FWDDECL)
#define IL2CPP_STRUCT_DebuggerTypeProxyAttribute_FWDDECL
#include <Modloader/app/structs/DebuggerTypeProxyAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_DebuggerTypeProxyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebuggerTypeProxyAttribute_DEFINED) && !defined(IL2CPP_STRUCT_DebuggerTypeProxyAttribute_FWDDECL)
#include <Modloader/app/structs/DebuggerTypeProxyAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebuggerTypeProxyAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
