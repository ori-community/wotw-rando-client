#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Javascript_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Javascript_INITIALIZING
#if !defined(IL2CPP_STRUCT_Javascript_DEFINED)
#include <Modloader/app/structs/Javascript__Fields.h>
#if defined(IL2CPP_STRUCT_Javascript__Fields_DEFINED)
#define IL2CPP_STRUCT_Javascript_DEFINED
struct Javascript__Class;
struct Javascript {
    struct Javascript__Class* klass;
    MonitorData* monitor;
    struct Javascript__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Javascript_FWDDECL)
#define IL2CPP_STRUCT_Javascript_FWDDECL
#include <Modloader/app/structs/Javascript__Class.h>
#endif
#undef IL2CPP_STRUCT_Javascript_INITIALIZING
#if !defined(IL2CPP_STRUCT_Javascript_DEFINED) && !defined(IL2CPP_STRUCT_Javascript_FWDDECL)
#include <Modloader/app/structs/Javascript.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Javascript.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
