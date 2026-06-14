#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimatedCritter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimatedCritter_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatedCritter_DEFINED)
#include <Modloader/app/structs/AnimatedCritter__Fields.h>
#if defined(IL2CPP_STRUCT_AnimatedCritter__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimatedCritter_DEFINED
struct AnimatedCritter__Class;
struct AnimatedCritter {
    struct AnimatedCritter__Class* klass;
    MonitorData* monitor;
    struct AnimatedCritter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimatedCritter_FWDDECL)
#define IL2CPP_STRUCT_AnimatedCritter_FWDDECL
#include <Modloader/app/structs/AnimatedCritter__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimatedCritter_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatedCritter_DEFINED) && !defined(IL2CPP_STRUCT_AnimatedCritter_FWDDECL)
#include <Modloader/app/structs/AnimatedCritter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimatedCritter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
