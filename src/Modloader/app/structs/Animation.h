#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Animation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Animation_INITIALIZING
#if !defined(IL2CPP_STRUCT_Animation_DEFINED)
#include <Modloader/app/structs/Animation__Fields.h>
#if defined(IL2CPP_STRUCT_Animation__Fields_DEFINED)
#define IL2CPP_STRUCT_Animation_DEFINED
struct Animation__Class;
struct Animation {
    struct Animation__Class* klass;
    MonitorData* monitor;
    struct Animation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Animation_FWDDECL)
#define IL2CPP_STRUCT_Animation_FWDDECL
#include <Modloader/app/structs/Animation__Class.h>
#endif
#undef IL2CPP_STRUCT_Animation_INITIALIZING
#if !defined(IL2CPP_STRUCT_Animation_DEFINED) && !defined(IL2CPP_STRUCT_Animation_FWDDECL)
#include <Modloader/app/structs/Animation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Animation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
