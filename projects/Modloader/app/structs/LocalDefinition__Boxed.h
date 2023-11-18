#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocalDefinition__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocalDefinition__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalDefinition__Boxed_DEFINED)
#include <Modloader/app/structs/LocalDefinition.h>
#if defined(IL2CPP_STRUCT_LocalDefinition_DEFINED)
#define IL2CPP_STRUCT_LocalDefinition__Boxed_DEFINED
struct LocalDefinition__Class;
struct LocalDefinition__Boxed {
    struct LocalDefinition__Class* klass;
    MonitorData* monitor;
    struct LocalDefinition fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LocalDefinition__Boxed_FWDDECL)
#define IL2CPP_STRUCT_LocalDefinition__Boxed_FWDDECL
#include <Modloader/app/structs/LocalDefinition__Class.h>
#endif
#undef IL2CPP_STRUCT_LocalDefinition__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalDefinition__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_LocalDefinition__Boxed_FWDDECL)
#include <Modloader/app/structs/LocalDefinition__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocalDefinition__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
