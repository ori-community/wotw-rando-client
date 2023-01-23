#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LayoutRebuilder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LayoutRebuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_LayoutRebuilder_DEFINED)
#include <Modloader/app/structs/LayoutRebuilder__Fields.h>
#if defined(IL2CPP_STRUCT_LayoutRebuilder__Fields_DEFINED)
#define IL2CPP_STRUCT_LayoutRebuilder_DEFINED
struct LayoutRebuilder__Class;
struct LayoutRebuilder {
    struct LayoutRebuilder__Class* klass;
    MonitorData* monitor;
    struct LayoutRebuilder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LayoutRebuilder_FWDDECL)
#define IL2CPP_STRUCT_LayoutRebuilder_FWDDECL
#include <Modloader/app/structs/LayoutRebuilder__Class.h>
#endif
#undef IL2CPP_STRUCT_LayoutRebuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_LayoutRebuilder_DEFINED) && !defined(IL2CPP_STRUCT_LayoutRebuilder_FWDDECL)
#include <Modloader/app/structs/LayoutRebuilder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LayoutRebuilder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
