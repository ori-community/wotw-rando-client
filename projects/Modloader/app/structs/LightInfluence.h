#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightInfluence_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightInfluence_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightInfluence_DEFINED)
#include <Modloader/app/structs/LightInfluence__Fields.h>
#if defined(IL2CPP_STRUCT_LightInfluence__Fields_DEFINED)
#define IL2CPP_STRUCT_LightInfluence_DEFINED
struct LightInfluence__Class;
struct LightInfluence {
    struct LightInfluence__Class* klass;
    MonitorData* monitor;
    struct LightInfluence__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LightInfluence_FWDDECL)
#define IL2CPP_STRUCT_LightInfluence_FWDDECL
#include <Modloader/app/structs/LightInfluence__Class.h>
#endif
#undef IL2CPP_STRUCT_LightInfluence_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightInfluence_DEFINED) && !defined(IL2CPP_STRUCT_LightInfluence_FWDDECL)
#include <Modloader/app/structs/LightInfluence.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightInfluence.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
