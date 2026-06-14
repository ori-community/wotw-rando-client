#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BadTriangle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BadTriangle_INITIALIZING
#if !defined(IL2CPP_STRUCT_BadTriangle_DEFINED)
#include <Modloader/app/structs/BadTriangle__Fields.h>
#if defined(IL2CPP_STRUCT_BadTriangle__Fields_DEFINED)
#define IL2CPP_STRUCT_BadTriangle_DEFINED
struct BadTriangle__Class;
struct BadTriangle {
    struct BadTriangle__Class* klass;
    MonitorData* monitor;
    struct BadTriangle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BadTriangle_FWDDECL)
#define IL2CPP_STRUCT_BadTriangle_FWDDECL
#include <Modloader/app/structs/BadTriangle__Class.h>
#endif
#undef IL2CPP_STRUCT_BadTriangle_INITIALIZING
#if !defined(IL2CPP_STRUCT_BadTriangle_DEFINED) && !defined(IL2CPP_STRUCT_BadTriangle_FWDDECL)
#include <Modloader/app/structs/BadTriangle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BadTriangle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
