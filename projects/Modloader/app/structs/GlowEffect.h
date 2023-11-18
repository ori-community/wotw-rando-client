#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GlowEffect_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GlowEffect_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlowEffect_DEFINED)
#include <Modloader/app/structs/GlowEffect__Fields.h>
#if defined(IL2CPP_STRUCT_GlowEffect__Fields_DEFINED)
#define IL2CPP_STRUCT_GlowEffect_DEFINED
struct GlowEffect__Class;
struct GlowEffect {
    struct GlowEffect__Class* klass;
    MonitorData* monitor;
    struct GlowEffect__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GlowEffect_FWDDECL)
#define IL2CPP_STRUCT_GlowEffect_FWDDECL
#include <Modloader/app/structs/GlowEffect__Class.h>
#endif
#undef IL2CPP_STRUCT_GlowEffect_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlowEffect_DEFINED) && !defined(IL2CPP_STRUCT_GlowEffect_FWDDECL)
#include <Modloader/app/structs/GlowEffect.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GlowEffect.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
