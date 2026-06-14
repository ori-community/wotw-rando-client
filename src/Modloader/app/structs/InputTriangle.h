#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InputTriangle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InputTriangle_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputTriangle_DEFINED)
#include <Modloader/app/structs/InputTriangle__Fields.h>
#if defined(IL2CPP_STRUCT_InputTriangle__Fields_DEFINED)
#define IL2CPP_STRUCT_InputTriangle_DEFINED
struct InputTriangle__Class;
struct InputTriangle {
    struct InputTriangle__Class* klass;
    MonitorData* monitor;
    struct InputTriangle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InputTriangle_FWDDECL)
#define IL2CPP_STRUCT_InputTriangle_FWDDECL
#include <Modloader/app/structs/InputTriangle__Class.h>
#endif
#undef IL2CPP_STRUCT_InputTriangle_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputTriangle_DEFINED) && !defined(IL2CPP_STRUCT_InputTriangle_FWDDECL)
#include <Modloader/app/structs/InputTriangle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InputTriangle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
