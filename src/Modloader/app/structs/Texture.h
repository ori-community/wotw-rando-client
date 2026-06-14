#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Texture_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Texture_INITIALIZING
#if !defined(IL2CPP_STRUCT_Texture_DEFINED)
#include <Modloader/app/structs/Texture__Fields.h>
#if defined(IL2CPP_STRUCT_Texture__Fields_DEFINED)
#define IL2CPP_STRUCT_Texture_DEFINED
struct Texture__Class;
struct Texture {
    struct Texture__Class* klass;
    MonitorData* monitor;
    struct Texture__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Texture_FWDDECL)
#define IL2CPP_STRUCT_Texture_FWDDECL
#include <Modloader/app/structs/Texture__Class.h>
#endif
#undef IL2CPP_STRUCT_Texture_INITIALIZING
#if !defined(IL2CPP_STRUCT_Texture_DEFINED) && !defined(IL2CPP_STRUCT_Texture_FWDDECL)
#include <Modloader/app/structs/Texture.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Texture.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
