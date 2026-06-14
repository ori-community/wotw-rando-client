#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MovieTexture_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MovieTexture_INITIALIZING
#if !defined(IL2CPP_STRUCT_MovieTexture_DEFINED)
#include <Modloader/app/structs/MovieTexture__Fields.h>
#if defined(IL2CPP_STRUCT_MovieTexture__Fields_DEFINED)
#define IL2CPP_STRUCT_MovieTexture_DEFINED
struct MovieTexture__Class;
struct MovieTexture {
    struct MovieTexture__Class* klass;
    MonitorData* monitor;
    struct MovieTexture__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MovieTexture_FWDDECL)
#define IL2CPP_STRUCT_MovieTexture_FWDDECL
#include <Modloader/app/structs/MovieTexture__Class.h>
#endif
#undef IL2CPP_STRUCT_MovieTexture_INITIALIZING
#if !defined(IL2CPP_STRUCT_MovieTexture_DEFINED) && !defined(IL2CPP_STRUCT_MovieTexture_FWDDECL)
#include <Modloader/app/structs/MovieTexture.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MovieTexture.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
