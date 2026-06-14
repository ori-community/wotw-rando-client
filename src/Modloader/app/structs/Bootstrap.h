#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Bootstrap_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Bootstrap_INITIALIZING
#if !defined(IL2CPP_STRUCT_Bootstrap_DEFINED)
#include <Modloader/app/structs/Bootstrap__Fields.h>
#if defined(IL2CPP_STRUCT_Bootstrap__Fields_DEFINED)
#define IL2CPP_STRUCT_Bootstrap_DEFINED
struct Bootstrap__Class;
struct Bootstrap {
    struct Bootstrap__Class* klass;
    MonitorData* monitor;
    struct Bootstrap__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Bootstrap_FWDDECL)
#define IL2CPP_STRUCT_Bootstrap_FWDDECL
#include <Modloader/app/structs/Bootstrap__Class.h>
#endif
#undef IL2CPP_STRUCT_Bootstrap_INITIALIZING
#if !defined(IL2CPP_STRUCT_Bootstrap_DEFINED) && !defined(IL2CPP_STRUCT_Bootstrap_FWDDECL)
#include <Modloader/app/structs/Bootstrap.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Bootstrap.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
