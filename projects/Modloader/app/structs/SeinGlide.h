#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinGlide_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinGlide_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGlide_DEFINED)
#include <Modloader/app/structs/SeinGlide__Fields.h>
#if defined(IL2CPP_STRUCT_SeinGlide__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinGlide_DEFINED
struct SeinGlide__Class;
struct SeinGlide {
    struct SeinGlide__Class* klass;
    MonitorData* monitor;
    struct SeinGlide__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinGlide_FWDDECL)
#define IL2CPP_STRUCT_SeinGlide_FWDDECL
#include <Modloader/app/structs/SeinGlide__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinGlide_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGlide_DEFINED) && !defined(IL2CPP_STRUCT_SeinGlide_FWDDECL)
#include <Modloader/app/structs/SeinGlide.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinGlide.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
