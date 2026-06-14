#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HumanLimit__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HumanLimit__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_HumanLimit__Boxed_DEFINED)
#include <Modloader/app/structs/HumanLimit.h>
#if defined(IL2CPP_STRUCT_HumanLimit_DEFINED)
#define IL2CPP_STRUCT_HumanLimit__Boxed_DEFINED
struct HumanLimit__Class;
struct HumanLimit__Boxed {
    struct HumanLimit__Class* klass;
    MonitorData* monitor;
    struct HumanLimit fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HumanLimit__Boxed_FWDDECL)
#define IL2CPP_STRUCT_HumanLimit__Boxed_FWDDECL
#include <Modloader/app/structs/HumanLimit__Class.h>
#endif
#undef IL2CPP_STRUCT_HumanLimit__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_HumanLimit__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_HumanLimit__Boxed_FWDDECL)
#include <Modloader/app/structs/HumanLimit__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HumanLimit__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
