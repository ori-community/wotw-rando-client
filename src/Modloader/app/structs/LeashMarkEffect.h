#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeashMarkEffect_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeashMarkEffect_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeashMarkEffect_DEFINED)
#include <Modloader/app/structs/LeashMarkEffect__Fields.h>
#if defined(IL2CPP_STRUCT_LeashMarkEffect__Fields_DEFINED)
#define IL2CPP_STRUCT_LeashMarkEffect_DEFINED
struct LeashMarkEffect__Class;
struct LeashMarkEffect {
    struct LeashMarkEffect__Class* klass;
    MonitorData* monitor;
    struct LeashMarkEffect__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeashMarkEffect_FWDDECL)
#define IL2CPP_STRUCT_LeashMarkEffect_FWDDECL
#include <Modloader/app/structs/LeashMarkEffect__Class.h>
#endif
#undef IL2CPP_STRUCT_LeashMarkEffect_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeashMarkEffect_DEFINED) && !defined(IL2CPP_STRUCT_LeashMarkEffect_FWDDECL)
#include <Modloader/app/structs/LeashMarkEffect.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeashMarkEffect.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
