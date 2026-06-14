#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GlobalFog_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GlobalFog_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlobalFog_DEFINED)
#include <Modloader/app/structs/GlobalFog__Fields.h>
#if defined(IL2CPP_STRUCT_GlobalFog__Fields_DEFINED)
#define IL2CPP_STRUCT_GlobalFog_DEFINED
struct GlobalFog__Class;
struct GlobalFog {
    struct GlobalFog__Class* klass;
    MonitorData* monitor;
    struct GlobalFog__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GlobalFog_FWDDECL)
#define IL2CPP_STRUCT_GlobalFog_FWDDECL
#include <Modloader/app/structs/GlobalFog__Class.h>
#endif
#undef IL2CPP_STRUCT_GlobalFog_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlobalFog_DEFINED) && !defined(IL2CPP_STRUCT_GlobalFog_FWDDECL)
#include <Modloader/app/structs/GlobalFog.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GlobalFog.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
