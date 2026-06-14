#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StateFovModifier__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StateFovModifier__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateFovModifier__Boxed_DEFINED)
#include <Modloader/app/structs/StateFovModifier.h>
#if defined(IL2CPP_STRUCT_StateFovModifier_DEFINED)
#define IL2CPP_STRUCT_StateFovModifier__Boxed_DEFINED
struct StateFovModifier__Class;
struct StateFovModifier__Boxed {
    struct StateFovModifier__Class* klass;
    MonitorData* monitor;
    struct StateFovModifier fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StateFovModifier__Boxed_FWDDECL)
#define IL2CPP_STRUCT_StateFovModifier__Boxed_FWDDECL
#include <Modloader/app/structs/StateFovModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_StateFovModifier__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateFovModifier__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_StateFovModifier__Boxed_FWDDECL)
#include <Modloader/app/structs/StateFovModifier__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StateFovModifier__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
