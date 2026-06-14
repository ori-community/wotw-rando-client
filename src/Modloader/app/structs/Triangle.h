#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Triangle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Triangle_INITIALIZING
#if !defined(IL2CPP_STRUCT_Triangle_DEFINED)
#include <Modloader/app/structs/Triangle__Fields.h>
#if defined(IL2CPP_STRUCT_Triangle__Fields_DEFINED)
#define IL2CPP_STRUCT_Triangle_DEFINED
struct Triangle__Class;
struct Triangle {
    struct Triangle__Class* klass;
    MonitorData* monitor;
    struct Triangle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Triangle_FWDDECL)
#define IL2CPP_STRUCT_Triangle_FWDDECL
#include <Modloader/app/structs/Triangle__Class.h>
#endif
#undef IL2CPP_STRUCT_Triangle_INITIALIZING
#if !defined(IL2CPP_STRUCT_Triangle_DEFINED) && !defined(IL2CPP_STRUCT_Triangle_FWDDECL)
#include <Modloader/app/structs/Triangle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Triangle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
