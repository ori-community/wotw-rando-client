#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxOneLive_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxOneLive_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneLive_DEFINED)
#define IL2CPP_STRUCT_XboxOneLive_DEFINED
struct XboxOneLive__Class;
struct XboxOneLive {
    struct XboxOneLive__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_XboxOneLive_FWDDECL)
#define IL2CPP_STRUCT_XboxOneLive_FWDDECL
#include <Modloader/app/structs/XboxOneLive__Class.h>
#endif
#undef IL2CPP_STRUCT_XboxOneLive_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneLive_DEFINED) && !defined(IL2CPP_STRUCT_XboxOneLive_FWDDECL)
#include <Modloader/app/structs/XboxOneLive.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxOneLive.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
