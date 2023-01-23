#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkTriangle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkTriangle_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkTriangle_DEFINED)
#include <Modloader/app/structs/AkTriangle__Fields.h>
#if defined(IL2CPP_STRUCT_AkTriangle__Fields_DEFINED)
#define IL2CPP_STRUCT_AkTriangle_DEFINED
struct AkTriangle__Class;
struct AkTriangle {
    struct AkTriangle__Class* klass;
    MonitorData* monitor;
    struct AkTriangle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkTriangle_FWDDECL)
#define IL2CPP_STRUCT_AkTriangle_FWDDECL
#include <Modloader/app/structs/AkTriangle__Class.h>
#endif
#undef IL2CPP_STRUCT_AkTriangle_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkTriangle_DEFINED) && !defined(IL2CPP_STRUCT_AkTriangle_FWDDECL)
#include <Modloader/app/structs/AkTriangle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkTriangle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
