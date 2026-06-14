#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IgnoreImmediateChanges__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IgnoreImmediateChanges__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_IgnoreImmediateChanges__Boxed_DEFINED)
#include <Modloader/app/structs/IgnoreImmediateChanges.h>
#if defined(IL2CPP_STRUCT_IgnoreImmediateChanges_DEFINED)
#define IL2CPP_STRUCT_IgnoreImmediateChanges__Boxed_DEFINED
struct IgnoreImmediateChanges__Class;
struct IgnoreImmediateChanges__Boxed {
    struct IgnoreImmediateChanges__Class* klass;
    MonitorData* monitor;
    struct IgnoreImmediateChanges fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IgnoreImmediateChanges__Boxed_FWDDECL)
#define IL2CPP_STRUCT_IgnoreImmediateChanges__Boxed_FWDDECL
#include <Modloader/app/structs/IgnoreImmediateChanges__Class.h>
#endif
#undef IL2CPP_STRUCT_IgnoreImmediateChanges__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_IgnoreImmediateChanges__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_IgnoreImmediateChanges__Boxed_FWDDECL)
#include <Modloader/app/structs/IgnoreImmediateChanges__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IgnoreImmediateChanges__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
