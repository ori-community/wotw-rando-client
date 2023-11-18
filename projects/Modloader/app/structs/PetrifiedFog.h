#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedFog_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedFog_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedFog_DEFINED)
#include <Modloader/app/structs/PetrifiedFog__Fields.h>
#if defined(IL2CPP_STRUCT_PetrifiedFog__Fields_DEFINED)
#define IL2CPP_STRUCT_PetrifiedFog_DEFINED
struct PetrifiedFog__Class;
struct PetrifiedFog {
    struct PetrifiedFog__Class* klass;
    MonitorData* monitor;
    struct PetrifiedFog__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedFog_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedFog_FWDDECL
#include <Modloader/app/structs/PetrifiedFog__Class.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedFog_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedFog_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedFog_FWDDECL)
#include <Modloader/app/structs/PetrifiedFog.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedFog.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
