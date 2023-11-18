#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebuggerNonUserCodeAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebuggerNonUserCodeAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebuggerNonUserCodeAttribute_DEFINED)
#define IL2CPP_STRUCT_DebuggerNonUserCodeAttribute_DEFINED
struct DebuggerNonUserCodeAttribute__Class;
struct DebuggerNonUserCodeAttribute {
    struct DebuggerNonUserCodeAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DebuggerNonUserCodeAttribute_FWDDECL)
#define IL2CPP_STRUCT_DebuggerNonUserCodeAttribute_FWDDECL
#include <Modloader/app/structs/DebuggerNonUserCodeAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_DebuggerNonUserCodeAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebuggerNonUserCodeAttribute_DEFINED) && !defined(IL2CPP_STRUCT_DebuggerNonUserCodeAttribute_FWDDECL)
#include <Modloader/app/structs/DebuggerNonUserCodeAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebuggerNonUserCodeAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
