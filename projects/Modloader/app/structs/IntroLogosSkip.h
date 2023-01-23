#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IntroLogosSkip_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IntroLogosSkip_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntroLogosSkip_DEFINED)
#include <Modloader/app/structs/IntroLogosSkip__Fields.h>
#if defined(IL2CPP_STRUCT_IntroLogosSkip__Fields_DEFINED)
#define IL2CPP_STRUCT_IntroLogosSkip_DEFINED
struct IntroLogosSkip__Class;
struct IntroLogosSkip {
    struct IntroLogosSkip__Class* klass;
    MonitorData* monitor;
    struct IntroLogosSkip__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IntroLogosSkip_FWDDECL)
#define IL2CPP_STRUCT_IntroLogosSkip_FWDDECL
#include <Modloader/app/structs/IntroLogosSkip__Class.h>
#endif
#undef IL2CPP_STRUCT_IntroLogosSkip_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntroLogosSkip_DEFINED) && !defined(IL2CPP_STRUCT_IntroLogosSkip_FWDDECL)
#include <Modloader/app/structs/IntroLogosSkip.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IntroLogosSkip.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
