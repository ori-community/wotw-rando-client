#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LayeredAnimation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LayeredAnimation_INITIALIZING
#if !defined(IL2CPP_STRUCT_LayeredAnimation_DEFINED)
#include <Modloader/app/structs/LayeredAnimation__Fields.h>
#if defined(IL2CPP_STRUCT_LayeredAnimation__Fields_DEFINED)
#define IL2CPP_STRUCT_LayeredAnimation_DEFINED
struct LayeredAnimation__Class;
struct LayeredAnimation {
    struct LayeredAnimation__Class* klass;
    MonitorData* monitor;
    struct LayeredAnimation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LayeredAnimation_FWDDECL)
#define IL2CPP_STRUCT_LayeredAnimation_FWDDECL
#include <Modloader/app/structs/LayeredAnimation__Class.h>
#endif
#undef IL2CPP_STRUCT_LayeredAnimation_INITIALIZING
#if !defined(IL2CPP_STRUCT_LayeredAnimation_DEFINED) && !defined(IL2CPP_STRUCT_LayeredAnimation_FWDDECL)
#include <Modloader/app/structs/LayeredAnimation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LayeredAnimation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
