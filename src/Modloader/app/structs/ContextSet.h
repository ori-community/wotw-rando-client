#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContextSet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContextSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContextSet_DEFINED)
#include <Modloader/app/structs/ContextSet__Fields.h>
#if defined(IL2CPP_STRUCT_ContextSet__Fields_DEFINED)
#define IL2CPP_STRUCT_ContextSet_DEFINED
struct ContextSet__Class;
struct ContextSet {
    struct ContextSet__Class* klass;
    MonitorData* monitor;
    struct ContextSet__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ContextSet_FWDDECL)
#define IL2CPP_STRUCT_ContextSet_FWDDECL
#include <Modloader/app/structs/ContextSet__Class.h>
#endif
#undef IL2CPP_STRUCT_ContextSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContextSet_DEFINED) && !defined(IL2CPP_STRUCT_ContextSet_FWDDECL)
#include <Modloader/app/structs/ContextSet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContextSet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
