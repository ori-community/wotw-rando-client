#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReferencePoint__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReferencePoint__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReferencePoint__Boxed_DEFINED)
#include <Modloader/app/structs/ReferencePoint.h>
#if defined(IL2CPP_STRUCT_ReferencePoint_DEFINED)
#define IL2CPP_STRUCT_ReferencePoint__Boxed_DEFINED
struct ReferencePoint__Class;
struct ReferencePoint__Boxed {
    struct ReferencePoint__Class* klass;
    MonitorData* monitor;
    struct ReferencePoint fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReferencePoint__Boxed_FWDDECL)
#define IL2CPP_STRUCT_ReferencePoint__Boxed_FWDDECL
#include <Modloader/app/structs/ReferencePoint__Class.h>
#endif
#undef IL2CPP_STRUCT_ReferencePoint__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReferencePoint__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_ReferencePoint__Boxed_FWDDECL)
#include <Modloader/app/structs/ReferencePoint__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReferencePoint__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
