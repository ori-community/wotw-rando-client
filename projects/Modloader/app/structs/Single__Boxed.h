#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Single__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Single__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Single__Boxed_DEFINED)
#define IL2CPP_STRUCT_Single__Boxed_DEFINED
struct Single__Class;
struct Single__Boxed {
    struct Single__Class* klass;
    MonitorData* monitor;
    float fields;
};
#endif
#if !defined(IL2CPP_STRUCT_Single__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Single__Boxed_FWDDECL
#include <Modloader/app/structs/Single__Class.h>
#endif
#undef IL2CPP_STRUCT_Single__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Single__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Single__Boxed_FWDDECL)
#include <Modloader/app/structs/Single__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Single__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
