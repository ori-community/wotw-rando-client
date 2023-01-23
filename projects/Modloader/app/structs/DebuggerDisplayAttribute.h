#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebuggerDisplayAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebuggerDisplayAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebuggerDisplayAttribute_DEFINED)
#include <Modloader/app/structs/DebuggerDisplayAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_DebuggerDisplayAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_DebuggerDisplayAttribute_DEFINED
struct DebuggerDisplayAttribute__Class;
struct DebuggerDisplayAttribute {
    struct DebuggerDisplayAttribute__Class* klass;
    MonitorData* monitor;
    struct DebuggerDisplayAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebuggerDisplayAttribute_FWDDECL)
#define IL2CPP_STRUCT_DebuggerDisplayAttribute_FWDDECL
#include <Modloader/app/structs/DebuggerDisplayAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_DebuggerDisplayAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebuggerDisplayAttribute_DEFINED) && !defined(IL2CPP_STRUCT_DebuggerDisplayAttribute_FWDDECL)
#include <Modloader/app/structs/DebuggerDisplayAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebuggerDisplayAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
