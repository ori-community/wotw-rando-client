#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StateValidator__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StateValidator__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateValidator__Boxed_DEFINED)
#include <Modloader/app/structs/StateValidator.h>
#if defined(IL2CPP_STRUCT_StateValidator_DEFINED)
#define IL2CPP_STRUCT_StateValidator__Boxed_DEFINED
struct StateValidator__Class;
struct StateValidator__Boxed {
    struct StateValidator__Class* klass;
    MonitorData* monitor;
    struct StateValidator fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StateValidator__Boxed_FWDDECL)
#define IL2CPP_STRUCT_StateValidator__Boxed_FWDDECL
#include <Modloader/app/structs/StateValidator__Class.h>
#endif
#undef IL2CPP_STRUCT_StateValidator__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateValidator__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_StateValidator__Boxed_FWDDECL)
#include <Modloader/app/structs/StateValidator__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StateValidator__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
