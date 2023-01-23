#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocalBuilder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocalBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalBuilder_DEFINED)
#include <Modloader/app/structs/LocalBuilder__Fields.h>
#if defined(IL2CPP_STRUCT_LocalBuilder__Fields_DEFINED)
#define IL2CPP_STRUCT_LocalBuilder_DEFINED
struct LocalBuilder__Class;
struct LocalBuilder {
    struct LocalBuilder__Class* klass;
    MonitorData* monitor;
    struct LocalBuilder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LocalBuilder_FWDDECL)
#define IL2CPP_STRUCT_LocalBuilder_FWDDECL
#include <Modloader/app/structs/LocalBuilder__Class.h>
#endif
#undef IL2CPP_STRUCT_LocalBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalBuilder_DEFINED) && !defined(IL2CPP_STRUCT_LocalBuilder_FWDDECL)
#include <Modloader/app/structs/LocalBuilder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocalBuilder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
