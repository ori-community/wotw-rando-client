#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NestedContainer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NestedContainer_INITIALIZING
#if !defined(IL2CPP_STRUCT_NestedContainer_DEFINED)
#include <Modloader/app/structs/NestedContainer__Fields.h>
#if defined(IL2CPP_STRUCT_NestedContainer__Fields_DEFINED)
#define IL2CPP_STRUCT_NestedContainer_DEFINED
struct NestedContainer__Class;
struct NestedContainer {
    struct NestedContainer__Class* klass;
    MonitorData* monitor;
    struct NestedContainer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NestedContainer_FWDDECL)
#define IL2CPP_STRUCT_NestedContainer_FWDDECL
#include <Modloader/app/structs/NestedContainer__Class.h>
#endif
#undef IL2CPP_STRUCT_NestedContainer_INITIALIZING
#if !defined(IL2CPP_STRUCT_NestedContainer_DEFINED) && !defined(IL2CPP_STRUCT_NestedContainer_FWDDECL)
#include <Modloader/app/structs/NestedContainer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NestedContainer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
