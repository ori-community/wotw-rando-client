#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Face_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Face_INITIALIZING
#if !defined(IL2CPP_STRUCT_Face_DEFINED)
#include <Modloader/app/structs/Face__Fields.h>
#if defined(IL2CPP_STRUCT_Face__Fields_DEFINED)
#define IL2CPP_STRUCT_Face_DEFINED
struct Face__Class;
struct Face {
    struct Face__Class* klass;
    MonitorData* monitor;
    struct Face__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Face_FWDDECL)
#define IL2CPP_STRUCT_Face_FWDDECL
#include <Modloader/app/structs/Face__Class.h>
#endif
#undef IL2CPP_STRUCT_Face_INITIALIZING
#if !defined(IL2CPP_STRUCT_Face_DEFINED) && !defined(IL2CPP_STRUCT_Face_FWDDECL)
#include <Modloader/app/structs/Face.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Face.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
