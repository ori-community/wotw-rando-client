#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GL_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GL_INITIALIZING
#if !defined(IL2CPP_STRUCT_GL_DEFINED)
#define IL2CPP_STRUCT_GL_DEFINED
struct GL__Class;
struct GL {
    struct GL__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_GL_FWDDECL)
#define IL2CPP_STRUCT_GL_FWDDECL
#include <Modloader/app/structs/GL__Class.h>
#endif
#undef IL2CPP_STRUCT_GL_INITIALIZING
#if !defined(IL2CPP_STRUCT_GL_DEFINED) && !defined(IL2CPP_STRUCT_GL_FWDDECL)
#include <Modloader/app/structs/GL.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GL.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
