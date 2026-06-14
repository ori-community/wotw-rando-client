#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Graphics_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Graphics_INITIALIZING
#if !defined(IL2CPP_STRUCT_Graphics_DEFINED)
#define IL2CPP_STRUCT_Graphics_DEFINED
struct Graphics__Class;
struct Graphics {
    struct Graphics__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Graphics_FWDDECL)
#define IL2CPP_STRUCT_Graphics_FWDDECL
#include <Modloader/app/structs/Graphics__Class.h>
#endif
#undef IL2CPP_STRUCT_Graphics_INITIALIZING
#if !defined(IL2CPP_STRUCT_Graphics_DEFINED) && !defined(IL2CPP_STRUCT_Graphics_FWDDECL)
#include <Modloader/app/structs/Graphics.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Graphics.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
